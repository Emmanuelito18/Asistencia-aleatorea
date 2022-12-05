// Asistencia aleatorea.cpp : Define el punto de entrada de la aplicación.
//

#include "framework.h"
#include "Asistencia aleatorea.h"
#include "Persona.h"
#include "Alumno.h"

/*Definición de botones*/
#define btPrueba 100
#define btCrearPrincipal 101
#define btEditarPrincipal 102
#define btMostrarPrincipal 103
#define btGenerarPrincipal 1004
#define btSalirPrincipal 1005

#define MAX_LOADSTRING 100

/*Creación de botones*/
HWND BTN_crearGrupoPrincipal, BTN_mostrarGrupoPrincipal, BTN_editarGrupoPrincipal, BTN_generarAlumnosPrincipal, BTN_salirPrincipal,BTN_Prueba;

// Variables globales:  
HINSTANCE hInst;                                // instancia actual
WCHAR szTitle[MAX_LOADSTRING];                  // Texto de la barra de título
WCHAR szWindowClass[MAX_LOADSTRING];            // nombre de clase de la ventana principal

// Declaraciones de funciones adelantadas incluidas en este módulo de código:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    // TODO: Colocar código aquí.

    // Inicializar cadenas globales
    LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
    LoadStringW(hInstance, IDC_ASISTENCIAALEATOREA, szWindowClass, MAX_LOADSTRING);
    MyRegisterClass(hInstance);

    // Realizar la inicialización de la aplicación:
    if (!InitInstance (hInstance, nCmdShow))
    {
        return FALSE;
    }

    HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_ASISTENCIAALEATOREA));

    MSG msg;

    // Bucle principal de mensajes:
    while (GetMessage(&msg, nullptr, 0, 0))
    {
        if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }
    }

    return (int) msg.wParam;
}



//
//  FUNCIÓN: MyRegisterClass()
//
//  PROPÓSITO: Registra la clase de ventana.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
    WNDCLASSEXW wcex;
    /*Crea la estrucutra de la clase de la ventana*/
    
    wcex.cbSize = sizeof(WNDCLASSEX);

    wcex.style          = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInstance;
    wcex.hIcon          = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_ASISTENCIAALEATOREA));
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+2);
    wcex.lpszMenuName   = MAKEINTRESOURCEW(IDC_ASISTENCIAALEATOREA);
    wcex.lpszClassName  = szWindowClass;
    wcex.hIconSm        = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

    return RegisterClassExW(&wcex);
}

//
//   FUNCIÓN: InitInstance(HINSTANCE, int)
//
//   PROPÓSITO: Guarda el identificador de instancia y crea la ventana principal
//
//   COMENTARIOS:
//
//        En esta función, se guarda el identificador de instancia en una variable común y
//        se crea y muestra la ventana principal del programa.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   hInst = hInstance; // Almacenar identificador de instancia en una variable global

   HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, 757,470, nullptr, nullptr, hInstance,nullptr);
   /*Crea el manejador de la ventana*/

   if (!hWnd)
   {
      return FALSE;
   }

   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

   return TRUE;
}

//
//  FUNCIÓN: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  PROPÓSITO: Procesa mensajes de la ventana principal.
//
//  WM_COMMAND  - procesar el menú de aplicaciones
//  WM_PAINT    - Pintar la ventana principal
//  WM_DESTROY  - publicar un mensaje de salida y volver
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam){
    switch (message){
    case WM_CREATE: {
        HWND BTN_crearGrupoPrincipal = CreateWindow(
            L"BUTTON",  // Predefined class; Unicode assumed 
            L"Crear grupo",      // Button text 
            WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,  // Styles 
            40,         // x position 
            185,         // y position 
            150,        // Button width
            25,        // Button height
            hWnd,     // Parent window
            (HMENU)btCrearPrincipal,       // No menu.
            (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
            NULL);      // Pointer not needed.

        HWND BTN_editarGrupoPrincipal = CreateWindow(
            L"BUTTON",  // Predefined class; Unicode assumed 
            L"Editar grupo",      // Button text 
            WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles 
            200,         // x position 
            225,         // y position 
            150,        // Button width
            25,        // Button height
            hWnd,     // Parent window
            (HMENU)btEditarPrincipal,       // No menu.
            (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
            NULL);      // Pointer not needed.

        HWND BTN_mostrarGrupoPrincipal = CreateWindow(
            L"BUTTON",  // Predefined class; Unicode assumed 
            L"Mostrar grupo",      // Button text 
            WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles 
            390,         // x position 
            225,         // y position 
            150,        // Button width
            25,        // Button height
            hWnd,     // Parent window
            (HMENU)btMostrarPrincipal,       // No menu.
            (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
            NULL);      // Pointer not needed.

        HWND BTN_generarAlumnosPrincipal = CreateWindow(
            L"BUTTON",  // Predefined class; Unicode assumed 
            L"Generar alumnos",      // Button text 
            WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles 
            560,         // x position 
            185,         // y position 
            150,        // Button width
            25,        // Button height
            hWnd,     // Parent window
            (HMENU)btGenerarPrincipal,       // No menu.
            (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
            NULL);      // Pointer not needed.

        HWND BTN_salirPrincipal = CreateWindow(
            L"BUTTON",  // Predefined class; Unicode assumed 
            L"Salir",      // Button text 
            WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles 
            295,         // x position 
            290,         // y position 
            150,        // Button width
            25,        // Button height
            hWnd,     // Parent window
            (HMENU)btSalirPrincipal,       // No menu.
            (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
            NULL);      // Pointer not needed.

        HWND BTN_Prueba = CreateWindow(
            L"BUTTON",  // Predefined class; Unicode assumed 
            L"Boton de prueba",      // Button text 
            WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON,  // Styles 
            200,         // x position 
            100,         // y position 
            150,        // Button width
            25,        // Button height
            hWnd,     // Parent window
            (HMENU)btPrueba,       // No menu.
            (HINSTANCE)GetWindowLongPtr(hWnd, GWLP_HINSTANCE),
            NULL);      // Pointer not needed.
    }
    break;
    case WM_COMMAND:{
        /*
        if (LOWORD(wParam) == btPrueba && HIWORD(wParam) == BN_CLICKED) {
            MessageBox(NULL, L"Se preciono el boton de prueba", L"Botones", MB_ICONINFORMATION | MB_OK);
        }
        else if (LOWORD(wParam) == btCrearPrincipal && HIWORD(wParam) == BN_CLICKED) {
            MessageBox(NULL, L"Se preciono el boton para crear un grupo", L"Botones", MB_ICONINFORMATION | MB_OK);
        }
        else if (LOWORD(wParam) == btEditarPrincipal && HIWORD(wParam) == BN_CLICKED) {
            MessageBox(NULL, L"Se preciono el boton para editar un grupo", L"Botones", MB_ICONINFORMATION | MB_OK);
        }
        else if (LOWORD(wParam) == btMostrarPrincipal && HIWORD(wParam) == BN_CLICKED) {
            MessageBox(NULL, L"Se preciono el boton para mostrar un grupo", L"Botones", MB_ICONINFORMATION | MB_OK);
        }
        else if (LOWORD(wParam) == btGenerarPrincipal && HIWORD(wParam) == BN_CLICKED) {
            MessageBox(NULL, L"Se preciono el boton para generar de forma aleatoria la sistencia de un grupo", L"Botones", MB_ICONINFORMATION | MB_OK);
        }*/
        int wmId = LOWORD(wParam);
        // Analizar las selecciones de menú:
        switch (wmId)
        {
        case IDM_ABOUT:
            DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
            /*Invoca a la ventana de acerca de*/
            break;
        case IDM_EXIT:
            DestroyWindow(hWnd);
            break;
            
            /*Comportamiento de lso botones*/
        case btPrueba: {
            MessageBox(NULL, L"Se preciono el boton de prueba", L"Botones", MB_ICONINFORMATION | MB_OK);
        }break;
        case btCrearPrincipal: {
            MessageBox(NULL, L"Se preciono el boton de prueba", L"Botones", MB_ICONINFORMATION | MB_OK);
        }break;
        case btEditarPrincipal: {
            MessageBox(NULL, L"Se preciono el boton de prueba", L"Botones", MB_ICONINFORMATION | MB_OK);
        }break;
        case btGenerarPrincipal: {
            MessageBox(NULL, L"Se preciono el boton de prueba", L"Botones", MB_ICONINFORMATION | MB_OK);
        }break;
        case btMostrarPrincipal: {
            MessageBox(NULL, L"Se preciono el boton de prueba", L"Botones", MB_ICONINFORMATION | MB_OK);
        }break;
        case btSalirPrincipal: {
            if (MessageBox(hWnd, L"¿Estas seguro que quieres salir?", L"Salir", MB_OKCANCEL|MB_DEFBUTTON1) == IDOK) {
                SendMessage(hWnd, WM_DESTROY, 0, 0);
            }
        }break;

        default:
            return DefWindowProc(hWnd, message, wParam, lParam);
        }
        
    }
    break;
    case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            // TODO: Agregar cualquier código de dibujo que use hDC aquí...
            EndPaint(hWnd, &ps);

        }
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
    return 0;
}

// Controlador de mensajes del cuadro Acerca de.
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
    UNREFERENCED_PARAMETER(lParam);
    switch (message)
    {
    case WM_INITDIALOG:
        return (INT_PTR)TRUE;

    case WM_COMMAND:
        if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
        {
            EndDialog(hDlg, LOWORD(wParam));
            return (INT_PTR)TRUE;
        }
        break;
    }
    return (INT_PTR)FALSE;
}

/*Awa de UwU*/