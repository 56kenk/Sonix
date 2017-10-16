/*
 * Task priority
 * 1 ~ 15 System and CLI task
 * 16 ~ 47 Application task
 * 48 ~ 127 Middleware/Driver task
 */
#define PRIORITY_TASK_CLI_RX		1
#define PRIORITY_TASK_CLI_TX		1
#define PRIORITY_TASK_SYS_LOG		2
#define PRIORITY_TASK_SYS_DATE		15
#define PRIORITY_TASK_SYS_RESET_DEFAULT	3
#define PRIORITY_TASK_APP_TEST01	16
#define PRIORITY_TASK_APP_TEST02	17
#define PRIORITY_TASK_APP_TEST03	18
#define PRIORITY_TASK_APP_HEARTBEAT	55
#define PRIORITY_TASK_APP_CMDDAEMON	50
#define PRIORITY_TASK_APP_UPLOAD	50
#define PRIORITY_TASK_APP_SOCKET_EVENT	18
#define PRIORITY_TASK_APP_MAINFLOW	18
#define PRIORITY_TASK_APP_MCU_RECV	51
#define PRIORITY_TASK_APP_FILE_PROTECTION	35
#define PRIORITY_TASK_APP_REC_FLOW 	35
#define PRIORITY_TASK_APP_FILE_MANAGER  35
#define PRIORITY_TASK_MID_WDT_KEEPALIVE 110
#define PRIORITY_TASK_APP_PLAYBACK	40
#define PRIORITY_TASK_APP_VIDEO_GET	40
#define PRIORITY_TASK_APP_AUDIO_GET 	40
#define PRIORITY_TASK_APP_OSD_CTRL	40
#define PRIORITY_TASK_MID_FWUPGRADE	10
#define PRIORITY_TASK_MID_RTSP_SERVER	17
#define PRIORITY_TASK_MID_CLOUDTASK	18
#define PRIORITY_TASK_MID_SOCKHANDLE	18
#define PRIORITY_TASK_MID_CLOUDDATA	18
#define PRIORITY_TASK_MID_CLOUDEVENT	18
#define PRIORITY_TASK_MID_RECORD	50
#define PRIORITY_TASK_MID_TONE_DET	55
#define PRIORITY_TASK_MID_SF		48
#define PRIORITY_TASK_MID_SD		60
#define PRIORITY_TASK_MID_AUTOMOUNT	60
#define PRIORITY_TASK_MID_NVRAM		80
#define PRIORITY_TASK_MID_LWIP		90	
#define PRIORITY_TASK_MID_VIDEO		100
#define PRIORITY_TASK_DRV_TIMING	10
#define PRIORITY_TASK_DRV_USBD_PROCESS	90
#define PRIORITY_TASK_DRV_USBD_CLASS	90
#define PRIORITY_TASK_DRV_USBH		90
#define PRIORITY_TASK_DRV_MAC		100
#define PRIORITY_TASK_DRV_AUDIO		100
#define PRIORITY_TASK_DRV_ISP		110
#define PRIORITY_TASK_DRV_WIFI_MAIN		108
#define PRIORITY_TASK_DRV_WIFI_MESSAGE	75
#define PRIORITY_TASK_DRV_WIFI_EAPOL		75
#define PRIORITY_TASK_DRV_WIFI_WPA		95
#define PRIORITY_TASK_DRV_WIFI_SCAN		52
#define PRIORITY_TASK_DRV_WIFI_MGMT		51



