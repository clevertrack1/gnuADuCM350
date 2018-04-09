/* -----------------------------------------------------------------------------
 * Copyright (C) 2013 ARM Limited. All rights reserved.
 *  
 * $Date:        27. June 2013
 * $Revision:    V1.00
 *  
 * Project:      RTE Device Configuration for NXP LPC18xx
 * -------------------------------------------------------------------------- */

//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------

#ifndef __RTE_DEVICE_H
#define __RTE_DEVICE_H


// <e> USB0 Controller
#define RTE_USB_USB0                    1

//   <e> Pin Configuration
#define RTE_USB_USB0_PIN                1
//     <e> USB0_PPWR
//     <i> VBUS drive signal (towards external charge pump or power management unit);
//     <i> indicates that the VBUS signal must be driven (active HIGH).
//     <i> PINx_y
//       <o1> Pin  <0=>P1_7 <1=>P2_0 <2=>P2_3 <3=>P6_3
//     </e>
#define RTE_USB0_PPWR_PIN               1
#define RTE_USB0_PPWR_ID                3
#if (RTE_USB0_PPWR_ID == 0)
  #define RTE_USB0_PPWR_PORT            1
  #define RTE_USB0_PPWR_BIT             7
  #define RTE_USB0_PPWR_CONFIG          FUNC1
#elif (RTE_USB0_PPWR_ID == 1)
  #define RTE_USB0_PPWR_PORT            2
  #define RTE_USB0_PPWR_BIT             0
  #define RTE_USB0_PPWR_CONFIG          FUNC3
#elif (RTE_USB0_PPWR_ID == 2)
  #define RTE_USB0_PPWR_PORT            2
  #define RTE_USB0_PPWR_BIT             3
  #define RTE_USB0_PPWR_CONFIG          FUNC1
#elif (RTE_USB0_PPWR_ID == 3)
  #define RTE_USB0_PPWR_PORT            6
  #define RTE_USB0_PPWR_BIT             3
  #define RTE_USB0_PPWR_CONFIG          FUNC1
#else
  #error "Invalid RTE_USB0_PPWR Pin Configuration!"
#endif

//     <e> USB0_PWR_FAULT
//     <i> Port power fault signal indicating overcurrent condition;
//     <i> this signal monitors over-current on the USB bus
//        (external circuitry required to detect over-current condition).
//     <i> PINx_y
//       <o1> Pin  <0=>P1_5 <1=>P2_1 <2=>P2_4 <3=>P6_6 <4=>P8_0
//     </e>
#define RTE_USB0_PWR_FAULT_PIN          1
#define RTE_USB0_PWR_FAULT_ID           3
#if (RTE_USB0_PWR_FAULT_ID == 0)
  #define RTE_USB0_PWR_FAULT_PORT       1
  #define RTE_USB0_PWR_FAULT_BIT        5
  #define RTE_USB0_PWR_FAULT_CONFIG     FUNC4
#elif (RTE_USB0_PWR_FAULT_ID == 1)
  #define RTE_USB0_PWR_FAULT_PORT       2
  #define RTE_USB0_PWR_FAULT_BIT        1
  #define RTE_USB0_PWR_FAULT_CONFIG     FUNC3
#elif (RTE_USB0_PWR_FAULT_ID == 2)
  #define RTE_USB0_PWR_FAULT_PORT       2
  #define RTE_USB0_PWR_FAULT_BIT        4
  #define RTE_USB0_PWR_FAULT_CONFIG     FUNC7
#elif (RTE_USB0_PWR_FAULT_ID == 3)
  #define RTE_USB0_PWR_FAULT_PORT       6
  #define RTE_USB0_PWR_FAULT_BIT        6
  #define RTE_USB0_PWR_FAULT_CONFIG     FUNC3
#elif (RTE_USB0_PWR_FAULT_ID == 4)
  #define RTE_USB0_PWR_FAULT_PORT       8
  #define RTE_USB0_PWR_FAULT_BIT        0
  #define RTE_USB0_PWR_FAULT_CONFIG     FUNC1
#else
  #error "Invalid RTE_USB0_PWR_FAULT Pin Configuration!"
#endif

//     <e> USB0_IND0
//     <i> USB0 port indicator LED control output 0
//     <i> PINx_y
//       <o1> Pin  <0=>P1_4 <1=>P2_5 <2=>P2_6 <3=>P6_8 <4=>P8_2
//     </e>
#define RTE_USB0_IND0_PIN               1
#define RTE_USB0_IND0_ID                4
#if (RTE_USB0_IND0_ID == 0)
  #define RTE_USB0_IND0_PORT            1
  #define RTE_USB0_IND0_BIT             4
  #define RTE_USB0_IND0_CONFIG          FUNC4
#elif (RTE_USB0_IND0_ID == 1)
  #define RTE_USB0_IND0_PORT            2
  #define RTE_USB0_IND0_BIT             5
  #define RTE_USB0_IND0_CONFIG          FUNC7
#elif (RTE_USB0_IND0_ID == 2)
  #define RTE_USB0_IND0_PORT            2
  #define RTE_USB0_IND0_BIT             6
  #define RTE_USB0_IND0_CONFIG          FUNC3
#elif (RTE_USB0_IND0_ID == 3)
  #define RTE_USB0_IND0_PORT            6
  #define RTE_USB0_IND0_BIT             8
  #define RTE_USB0_IND0_CONFIG          FUNC3
#elif (RTE_USB0_IND0_ID == 4)
  #define RTE_USB0_IND0_PORT            8
  #define RTE_USB0_IND0_BIT             2
  #define RTE_USB0_IND0_CONFIG          FUNC1
#else
  #error "Invalid RTE_USB0_IND0 Pin Configuration!"
#endif

//     <e> USB0_IND1
//     <i> USB0 port indicator LED control output 1
//     <i> PINx_y
//       <o1> Pin  <0=>P1_3 <1=>P2_2 <2=>P6_7 <3=>P8_1
//     </e>
#define RTE_USB0_IND1_PIN               1
#define RTE_USB0_IND1_ID                3
#if (RTE_USB0_IND1_ID == 0)
  #define RTE_USB0_IND1_PORT            1
  #define RTE_USB0_IND1_BIT             3
  #define RTE_USB0_IND1_CONFIG          FUNC4
#elif (RTE_USB0_IND1_ID == 1)
  #define RTE_USB0_IND1_PORT            2
  #define RTE_USB0_IND1_BIT             2
  #define RTE_USB0_IND1_CONFIG          FUNC3
#elif (RTE_USB0_IND1_ID == 2)
  #define RTE_USB0_IND1_PORT            6
  #define RTE_USB0_IND1_BIT             7
  #define RTE_USB0_IND1_CONFIG          FUNC3
#elif (RTE_USB0_IND1_ID == 3)
  #define RTE_USB0_IND1_PORT            8
  #define RTE_USB0_IND1_BIT             1
  #define RTE_USB0_IND1_CONFIG          FUNC1
#else
  #error "Invalid RTE_USB0_IND1 Pin Configuration!"
#endif

//   </e>

//   <e> Device [Driver_USBD0]
//   <i> Configuration settings for Driver_USBD0 in component ::Drivers:USB Device
#define RTE_USB_USB0_DEV                1
//   <o0.0> High-speed
//     <i> Enable high-speed functionality
#define RTE_USB_USB0_HS_ENABLE          0

//     <h> Endpoints
//     <i> Reduce memory requirements of Driver by disabling unused endpoints
//       <e0.1> Endpoint 1
//         <o1.1>  Bulk OUT
//         <o1.17> Bulk IN
//         <o2.1>  Interrupt OUT
//         <o2.17> Interrupt IN
//         <o3.1>  Isochronous OUT
//         <o3.17> Isochronous IN
//       </e>
//       <e0.2> Endpoint 2
//         <o1.2>  Bulk OUT
//         <o1.18> Bulk IN
//         <o2.2>  Interrupt OUT
//         <o2.18> Interrupt IN
//         <o3.2>  Isochronous OUT
//         <o3.18> Isochronous IN
//       </e>
//       <e0.3> Endpoint 3
//         <o1.3>  Bulk OUT
//         <o1.19> Bulk IN
//         <o2.3>  Interrupt OUT
//         <o2.19> Interrupt IN
//         <o3.3>  Isochronous OUT
//         <o3.19> Isochronous IN
//       </e>
//       <e0.4> Endpoint 4
//         <o1.4>  Bulk OUT
//         <o1.20> Bulk IN
//         <o2.4>  Interrupt OUT
//         <o2.20> Interrupt IN
//         <o3.4>  Isochronous OUT
//         <o3.20> Isochronous IN
//       </e>
//       <e0.3> Endpoint 5
//         <o1.5>  Bulk OUT
//         <o1.21> Bulk IN
//         <o2.5>  Interrupt OUT
//         <o2.21> Interrupt IN
//         <o3.5>  Isochronous OUT
//         <o3.21> Isochronous IN
//       </e>
//     </h>
#define RTE_USB_USB0_DEV_EP             0x0000001F
#define RTE_USB_USB0_DEV_EP_BULK        0x003E003E
#define RTE_USB_USB0_DEV_EP_INT         0x003E003E
#define RTE_USB_USB0_DEV_EP_ISO         0x003E003E

//   </e>
// </e>


// <e> USB1 Controller
#define RTE_USB_USB1                    1
//   <e> Pin Configuration
#define RTE_USB_USB1_PIN                1
//     <e> USB1_PPWR
//     <i> VBUS drive signal (towards external charge pump or power management unit);
//     <i> indicates that the VBUS signal must be driven (active HIGH).
//     <i> PINx_y
//       <o1> Pin  <0=>P9_5
//     </e>
#define RTE_USB1_PPWR_PIN               1
#define RTE_USB1_PPWR_ID                0
#if (RTE_USB1_PPWR_ID == 0)
  #define RTE_USB1_PPWR_PORT            9
  #define RTE_USB1_PPWR_BIT             5
  #define RTE_USB1_PPWR_CONFIG          FUNC2
#else
  #error "Invalid RTE_USB1_PPWR Pin Configuration!"
#endif

//     <e> USB1_PWR_FAULT
//     <i> Port power fault signal indicating overcurrent condition;
//     <i> this signal monitors over-current on the USB bus
//        (external circuitry required to detect over-current condition).
//     <i> PINx_y
//       <o1> Pin  <0=>P9_6
//     </e>
#define RTE_USB1_PWR_FAULT_PIN          1
#define RTE_USB1_PWR_FAULT_ID           0
#if (RTE_USB1_PWR_FAULT_ID == 0)
  #define RTE_USB1_PWR_FAULT_PORT       9
  #define RTE_USB1_PWR_FAULT_BIT        6
  #define RTE_USB1_PWR_FAULT_CONFIG     FUNC2
#else
  #error "Invalid RTE_USB1_PWR_FAULT Pin Configuration!"
#endif

//     <e> USB1_IND0
//     <i> USB1 port indicator LED control output 0
//     <i> PINx_y
//       <o1> Pin  <0=>P3_2 <1=>P9_4
//     </e>
#define RTE_USB1_IND0_PIN               1
#define RTE_USB1_IND0_ID                1
#if (RTE_USB1_IND0_ID == 0)
  #define RTE_USB1_IND0_PORT            3
  #define RTE_USB1_IND0_BIT             2
  #define RTE_USB1_IND0_CONFIG          FUNC3
#elif (RTE_USB1_IND0_ID == 1)
  #define RTE_USB1_IND0_PORT            9
  #define RTE_USB1_IND0_BIT             4
  #define RTE_USB1_IND0_CONFIG          FUNC2
#else
  #error "Invalid RTE_USB1_IND0 Pin Configuration!"
#endif

//     <e> USB1_IND1
//     <i> USB1 port indicator LED control output 1
//     <i> PINx_y
//       <o1> Pin  <0=>P3_1 <1=>P9_3
//     </e>
#define RTE_USB1_IND1_PIN               1
#define RTE_USB1_IND1_ID                1
#if (RTE_USB1_IND1_ID == 0)
  #define RTE_USB1_IND1_PORT            3
  #define RTE_USB1_IND1_BIT             1
  #define RTE_USB1_IND1_CONFIG          FUNC3
#elif (RTE_USB1_IND1_ID == 1)
  #define RTE_USB1_IND1_PORT            9
  #define RTE_USB1_IND1_BIT             3
  #define RTE_USB1_IND1_CONFIG          FUNC2
#else
  #error "Invalid RTE_USB1_IND1 Pin Configuration!"
#endif

//     <e> USB1_VBUS
//     <i> Monitors the presence of USB1 bus power.
//     <i> PINx_y
//       <o1> Pin  <0=>P2_5
//     </e>
#define RTE_USB1_VBUS_PIN               1
#define RTE_USB1_VBUS_ID                0
#if (RTE_USB1_VBUS_ID == 0)
  #define RTE_USB1_VBUS_PORT            2
  #define RTE_USB1_VBUS_BIT             5
  #define RTE_USB1_VBUS_CONFIG          (FUNC2| (1 << 3) | (1 << 6))
#else
  #error "Invalid RTE_USB1_VBUS Pin Configuration!"
#endif

//   </e>

//   <e> Device
#define RTE_USB_USB1_DEV                1

//     <h> Endpoints
//     <i> Reduce memory requirements of Driver by disabling unused endpoints
//       <e0.1> Endpoint 1
//         <o1.1>  Bulk OUT
//         <o1.17> Bulk IN
//         <o2.1>  Interrupt OUT
//         <o2.17> Interrupt IN
//         <o3.1>  Isochronous OUT
//         <o3.17> Isochronous IN
//       </e>
//       <e0.2> Endpoint 2
//         <o1.2>  Bulk OUT
//         <o1.18> Bulk IN
//         <o2.2>  Interrupt OUT
//         <o2.18> Interrupt IN
//         <o3.2>  Isochronous OUT
//         <o3.18> Isochronous IN
//       </e>
//       <e0.3> Endpoint 3
//         <o1.3>  Bulk OUT
//         <o1.19> Bulk IN
//         <o2.3>  Interrupt OUT
//         <o2.19> Interrupt IN
//         <o3.3>  Isochronous OUT
//         <o3.19> Isochronous IN
//       </e>
//     </h>
#define RTE_USB_USB1_DEV_EP             0x0000003F
#define RTE_USB_USB1_DEV_EP_BULK        0x003E003E
#define RTE_USB_USB1_DEV_EP_INT         0x003E003E
#define RTE_USB_USB1_DEV_EP_ISO         0x003E003E

//   </e>
// </e>
// <e> ETH (Ethernet Interface) [Driver_ETH_MAC0]
// <i> Configuration settings for Driver_ETH_MAC0 in component ::Drivers:Ethernet MAC
#define RTE_ETH                                 1

//   <e> MII (Media Independent Interface)
#define RTE_ETH_MII                             0

//     <o> ETH_MII_ENET_TXD0 Pin <0=>P1_18
#define RTE_ETH_MII_ENET_TXD0_PORT_ID           0
#if    (RTE_ETH_MII_ENET_TXD0_PORT_ID == 0)
#define RTE_ETH_MII_ENET_TXD0_PORT              1
#define RTE_ETH_MII_ENET_TXD0_PIN               18
#define RTE_ETH_MII_ENET_TXD0_FUNC              3
#else
#error "Invalid ETH_MII_ENET_TXD0 Pin Configuration!"
#endif
//     <o> ETH_MII_ENET_TXD1 Pin <0=>P1_20
#define RTE_ETH_MII_ENET_TXD1_PORT_ID           0
#if    (RTE_ETH_MII_ENET_TXD1_PORT_ID == 0)
#define RTE_ETH_MII_ENET_TXD1_PORT              1
#define RTE_ETH_MII_ENET_TXD1_PIN               20
#define RTE_ETH_MII_ENET_TXD1_FUNC              3
#else
#error "Invalid ETH_MII_ENET_TXD1 Pin Configuration!"
#endif
//     <o> ETH_MII_ENET_TXD2 Pin <0=>P9_4
#define RTE_ETH_MII_ENET_TXD2_PORT_ID           0
#if    (RTE_ETH_MII_ENET_TXD2_PORT_ID == 0)
#define RTE_ETH_MII_ENET_TXD2_PORT              9
#define RTE_ETH_MII_ENET_TXD2_PIN               4
#define RTE_ETH_MII_ENET_TXD2_FUNC              5
#else
#error "Invalid ETH_MII_ENET_TXD2 Pin Configuration!"
#endif
//     <o> ETH_MII_ENET_TXD3 Pin <0=>P9_5 <1=>PC_3
#define RTE_ETH_MII_ENET_TXD3_PORT_ID           0
#if    (RTE_ETH_MII_ENET_TXD3_PORT_ID == 0)
#define RTE_ETH_MII_ENET_TXD3_PORT              9
#define RTE_ETH_MII_ENET_TXD3_PIN               5
#define RTE_ETH_MII_ENET_TXD3_FUNC              5
#elif   (RTE_ETH_MII_ENET_TXD3_PORT_ID == 1)
#define RTE_ETH_MII_ENET_TXD3_PORT              12
#define RTE_ETH_MII_ENET_TXD3_PIN               3
#define RTE_ETH_MII_ENET_TXD3_FUNC              3
#else
#error "Invalid ETH_MII_ENET_TXD3 Pin Configuration!"
#endif
//     <o> ETH_MII_ENET_TX_EN Pin <0=>P0_1 <1=>PC_4
#define RTE_ETH_MII_ENET_TX_EN_PORT_ID          0
#if    (RTE_ETH_MII_ENET_TX_EN_PORT_ID == 0)
#define RTE_ETH_MII_ENET_TX_EN_PORT             0
#define RTE_ETH_MII_ENET_TX_EN_PIN              1
#define RTE_ETH_MII_ENET_TX_EN_FUNC             6
#elif  (RTE_ETH_MII_ENET_TX_EN_PORT_ID == 1)
#define RTE_ETH_MII_ENET_TX_EN_PORT             12
#define RTE_ETH_MII_ENET_TX_EN_PIN              4
#define RTE_ETH_MII_ENET_TX_EN_FUNC             3
#else
#error "Invalid ETH_MII_ENET_TX_EN Pin Configuration!"
#endif
//     <o> ETH_MII_ENET_TX_CLK Pin <0=>P1_19
#define RTE_ETH_MII_ENET_TX_CLK_PORT_ID         0
#if    (RTE_ETH_MII_ENET_TX_CLK_PORT_ID == 0)
#define RTE_ETH_MII_ENET_TX_CLK_PORT            1
#define RTE_ETH_MII_ENET_TX_CLK_PIN             19
#define RTE_ETH_MII_ENET_TX_CLK_FUNC            0
#else
#error "Invalid ETH_MII_ENET_TX_CLK Pin Configuration!"
#endif
//     <o> ETH_MII_ENET_TX_ER Pin <0=>PC_5 <1=>PC_14
#define RTE_ETH_MII_ENET_TX_ER_PORT_ID          0
#if    (RTE_ETH_MII_ENET_TX_ER_PORT_ID == 0)
#define RTE_ETH_MII_ENET_TX_ER_PORT             12
#define RTE_ETH_MII_ENET_TX_ER_PIN              5
#define RTE_ETH_MII_ENET_TX_ER_FUNC             3
#elif    (RTE_ETH_MII_ENET_TX_ER_PORT_ID == 1)
#define RTE_ETH_MII_ENET_TX_ER_PORT             12
#define RTE_ETH_MII_ENET_TX_ER_PIN              14
#define RTE_ETH_MII_ENET_TX_ER_FUNC             6
#else
#error "Invalid ETH_MII_ENET_TX_ER Pin Configuration!"
#endif

//     <o> ETH_MII_ENET_RXD0 Pin <0=>P1_15
#define RTE_ETH_MII_ENET_RXD0_PORT_ID           0
#if    (RTE_ETH_MII_ENET_RXD0_PORT_ID == 0)
#define RTE_ETH_MII_ENET_RXD0_PORT              1
#define RTE_ETH_MII_ENET_RXD0_PIN               15
#define RTE_ETH_MII_ENET_RXD0_FUNC              3
#else
#error "Invalid ETH_MII_ENET_RXD0 Pin Configuration!"
#endif
//     <o> ETH_MII_ENET_RXD1 Pin <0=>P0_0
#define RTE_ETH_MII_ENET_RXD1_PORT_ID           0
#if    (RTE_ETH_MII_ENET_RXD1_PORT_ID == 0)
#define RTE_ETH_MII_ENET_RXD1_PORT              0
#define RTE_ETH_MII_ENET_RXD1_PIN               0
#define RTE_ETH_MII_ENET_RXD1_FUNC              2
#else
#error "Invalid ETH_MII_ENET_RXD1 Pin Configuration!"
#endif
//     <o> ETH_MII_ENET_RXD2 Pin <0=>P9_3 <1=>PC_6
#define RTE_ETH_MII_ENET_RXD2_PORT_ID           0
#if    (RTE_ETH_MII_ENET_RXD2_PORT_ID == 0)
#define RTE_ETH_MII_ENET_RXD2_PORT              9
#define RTE_ETH_MII_ENET_RXD2_PIN               3
#define RTE_ETH_MII_ENET_RXD2_FUNC              5
#elif    (RTE_ETH_MII_ENET_RXD2_PORT_ID == 1)
#define RTE_ETH_MII_ENET_RXD2_PORT              12
#define RTE_ETH_MII_ENET_RXD2_PIN               6
#define RTE_ETH_MII_ENET_RXD2_FUNC              3
#else
#error "Invalid ETH_MII_ENET_RXD2 Pin Configuration!"
#endif
//     <o> ETH_MII_ENET_RXD3 Pin <0=>P9_2 <1=>PC_7
#define RTE_ETH_MII_ENET_RXD3_PORT_ID           0
#if    (RTE_ETH_MII_ENET_RXD3_PORT_ID == 0)
#define RTE_ETH_MII_ENET_RXD3_PORT              9
#define RTE_ETH_MII_ENET_RXD3_PIN               2
#define RTE_ETH_MII_ENET_RXD3_FUNC              5
#elif    (RTE_ETH_MII_ENET_RXD3_PORT_ID == 1)
#define RTE_ETH_MII_ENET_RXD3_PORT              12
#define RTE_ETH_MII_ENET_RXD3_PIN               7
#define RTE_ETH_MII_ENET_RXD3_FUNC              3
#else
#error "Invalid ETH_MII_ENET_RXD3 Pin Configuration!"
#endif
//     <o> ETH_MII_ENET_RX_DV Pin <0=>P1_16 <1=>PC_8
#define RTE_ETH_MII_ENET_RX_DV_PORT_ID          0
#if    (RTE_ETH_MII_ENET_RX_DV_PORT_ID == 0)
#define RTE_ETH_MII_ENET_RX_DV_PORT             1
#define RTE_ETH_MII_ENET_RX_DV_PIN              16
#define RTE_ETH_MII_ENET_RX_DV_FUNC             7
#elif    (RTE_ETH_MII_ENET_RX_DV_PORT_ID == 1)
#define RTE_ETH_MII_ENET_RX_DV_PORT             12
#define RTE_ETH_MII_ENET_RX_DV_PIN              8
#define RTE_ETH_MII_ENET_RX_DV_FUNC             3
#else
#error "Invalid ETH_MII_ENET_RX_DV Pin Configuration!"
#endif
//     <o> ETH_MII_ENET_RX_CLK Pin <0=>PC_0
#define RTE_ETH_MII_ENET_RX_CLK_PORT_ID         0
#if    (RTE_ETH_MII_ENET_RX_CLK_PORT_ID == 0)
#define RTE_ETH_MII_ENET_RX_CLK_PORT            12
#define RTE_ETH_MII_ENET_RX_CLK_PIN             0
#define RTE_ETH_MII_ENET_RX_CLK_FUNC            3
#else
#error "Invalid ETH_MII_ENET_RX_CLK Pin Configuration!"
#endif
//     <o> ETH_MII_ENET_COL Pin <0=>P0_1 <1=>P4_1 <2=>P9_6
#define RTE_ETH_MII_ENET_COL_PORT_ID       0
#if    (RTE_ETH_MII_ENET_COL_PORT_ID == 0)
#define RTE_ETH_MII_ENET_COL_PORT               0
#define RTE_ETH_MII_ENET_COL_PIN                1
#define RTE_ETH_MII_ENET_COL_FUNC               2
#elif    (RTE_ETH_MII_ENET_COL_PORT_ID == 1)
#define RTE_ETH_MII_ENET_COL_PORT               4
#define RTE_ETH_MII_ENET_COL_PIN                1
#define RTE_ETH_MII_ENET_COL_FUNC               7
#elif    (RTE_ETH_MII_ENET_COL_PORT_ID == 2)
#define RTE_ETH_MII_ENET_COL_PORT               9
#define RTE_ETH_MII_ENET_COL_PIN                6
#define RTE_ETH_MII_ENET_COL_FUNC               5
#else
#error "Invalid ETH_MII_ENET_COL Pin Configuration!"
#endif
//     <o> ETH_MII_ENET_CRS Pin <0=>P1_16 <1=>P9_0
#define RTE_ETH_MII_ENET_CRS_PORT_ID            0
#if    (RTE_ETH_MII_ENET_CRS_PORT_ID == 0)
#define RTE_ETH_MII_ENET_CRS_PORT               1
#define RTE_ETH_MII_ENET_CRS_PIN                16
#define RTE_ETH_MII_ENET_CRS_FUNC               3
#elif    (RTE_ETH_MII_ENET_CRS_PORT_ID == 1)
#define RTE_ETH_MII_ENET_CRS_PORT               9
#define RTE_ETH_MII_ENET_CRS_PIN                0
#define RTE_ETH_MII_ENET_CRS_FUNC               5
#else
#error "Invalid ETH_MII_ENET_CRS Pin Configuration!"
#endif

//   </e>

//   <e> RMII (Reduced Media Independent Interface)
#define RTE_ETH_RMII                    1

//     <o> ETH_RMII_ENET_TXD0 Pin <0=>P1_18
#define RTE_ETH_RMII_ENET_TXD0_PORT_ID          0
#if    (RTE_ETH_RMII_ENET_TXD0_PORT_ID == 0)
#define RTE_ETH_RMII_ENET_TXD0_PORT             1
#define RTE_ETH_RMII_ENET_TXD0_PIN              18
#define RTE_ETH_RMII_ENET_TXD0_FUNC             3
#else
#error "Invalid ETH_RMII_ENET_TXD0 Pin Configuration!"
#endif
//     <o> ETH_RMII_ENET_TXD1 Pin <0=>P1_20
#define RTE_ETH_RMII_ENET_TXD1_PORT_ID          0
#if    (RTE_ETH_RMII_ENET_TXD1_PORT_ID == 0)
#define RTE_ETH_RMII_ENET_TXD1_PORT             1
#define RTE_ETH_RMII_ENET_TXD1_PIN              20
#define RTE_ETH_RMII_ENET_TXD1_FUNC             3
#else
#error "Invalid ETH_RMII_ENET_TXD1 Pin Configuration!"
#endif
//     <o> ETH_RMII_ENET_TX_EN Pin <0=>P0_1 <1=>PC_4
#define RTE_ETH_RMII_ENET_TX_EN_PORT_ID         0
#if    (RTE_ETH_RMII_ENET_TX_EN_PORT_ID == 0)
#define RTE_ETH_RMII_ENET_TX_EN_PORT            0
#define RTE_ETH_RMII_ENET_TX_EN_PIN             1
#define RTE_ETH_RMII_ENET_TX_EN_FUNC            6
#elif  (RTE_ETH_RMII_ENET_TX_EN_PORT_ID == 1)
#define RTE_ETH_RMII_ENET_TX_EN_PORT            12
#define RTE_ETH_RMII_ENET_TX_EN_PIN             4
#define RTE_ETH_RMII_ENET_TX_EN_FUNC            3
#else
#error "Invalid ETH_RMII_ENET_TX_EN Pin Configuration!"
#endif
//     <o> ETH_RMII_ENET_TX_CLK Pin <0=>P1_19
#define RTE_ETH_RMII_ENET_TX_CLK_PORT_ID        0
#if    (RTE_ETH_RMII_ENET_TX_CLK_PORT_ID == 0)
#define RTE_ETH_RMII_ENET_TX_CLK_PORT           1
#define RTE_ETH_RMII_ENET_TX_CLK_PIN            19
#define RTE_ETH_RMII_ENET_TX_CLK_FUNC           0
#else
#error "Invalid ETH_RMII_ENET_TX_CLK Pin Configuration!"
#endif
//     <o> ETH_RMII_ENET_RXD0 Pin <0=>P1_15
#define RTE_ETH_RMII_ENET_RXD0_PORT_ID          0
#if    (RTE_ETH_RMII_ENET_RXD0_PORT_ID == 0)
#define RTE_ETH_RMII_ENET_RXD0_PORT             1
#define RTE_ETH_RMII_ENET_RXD0_PIN              15
#define RTE_ETH_RMII_ENET_RXD0_FUNC             3
#else
#error "Invalid ETH_RMII_ENET_RXD0 Pin Configuration!"
#endif
//     <o> ETH_RMII_ENET_RXD1 Pin <0=>P0_0
#define RTE_ETH_RMII_ENET_RXD1_PORT_ID          0
#if    (RTE_ETH_RMII_ENET_RXD1_PORT_ID == 0)
#define RTE_ETH_RMII_ENET_RXD1_PORT             0
#define RTE_ETH_RMII_ENET_RXD1_PIN              0
#define RTE_ETH_RMII_ENET_RXD1_FUNC             2
#else
#error "Invalid ETH_RMII_ENET_RXD1 Pin Configuration!"
#endif
//     <o> ETH_RMII_ENET_RX_DV Pin <0=>P1_16 <1=>PC_8
#define RTE_ETH_RMII_ENET_RX_DV_PORT_ID         0
#if    (RTE_ETH_RMII_ENET_RX_DV_PORT_ID == 0)
#define RTE_ETH_RMII_ENET_RX_DV_PORT            1
#define RTE_ETH_RMII_ENET_RX_DV_PIN             16
#define RTE_ETH_RMII_ENET_RX_DV_FUNC            7
#elif  (RTE_ETH_RMII_ENET_RX_DV_PORT_ID == 1)
#define RTE_ETH_RMII_ENET_RX_DV_PORT            12
#define RTE_ETH_RMII_ENET_RX_DV_PIN             8
#define RTE_ETH_RMII_ENET_RX_DV_FUNC            3
#else
#error "Invalid ETH_RMII_ENET_RX_DV Pin Configuration!"
#endif
//   </e>

//   <h> Ethernet MIIM(Media Independent Interface Management)
//     <o> ETH_MDIO Pin <0=>P1_17
#define RTE_ETH_MDIO_PORT_ID            0
#if    (RTE_ETH_MDIO_PORT_ID == 0)
#define RTE_ETH_MDIO_PORT               1
#define RTE_ETH_MDIO_PIN                17
#define RTE_ETH_MDIO_FUNC               3
#else
#error "Invalid ETH_MDIO Pin Configuration!"
#endif
//     <o> ETH_MDC Pin <0=>P2_0 <1=>P7_7 <2=>PC_1
#define RTE_ETH_MDC_PORT_ID             2
#if    (RTE_ETH_MDC_PORT_ID == 0)
#define RTE_ETH_MDC_PORT                2
#define RTE_ETH_MDC_PIN                 0
#define RTE_ETH_MDC_FUNC                7
#elif  (RTE_ETH_MDC_PORT_ID == 1)
#define RTE_ETH_MDC_PORT                7
#define RTE_ETH_MDC_PIN                 7
#define RTE_ETH_MDC_FUNC                6
#elif  (RTE_ETH_MDC_PORT_ID == 2)
#define RTE_ETH_MDC_PORT                12
#define RTE_ETH_MDC_PIN                 1
#define RTE_ETH_MDC_FUNC                3
#else
#error "Invalid ETH_MDC Pin Configuration!"
#endif
//   </h>

// </e>

// <e> SDIO (Secure Digital Input/Output) [Driver_MCI0]
// <i> Configuration settings for Driver_MCI0 in component ::Drivers:MCI
#define RTE_SDIO                        1

//   <h> SDIO Bus
//     <o> SD_CD Pin <0=>NOT_USED <1=>P1_13 <2=>PC_8
#define RTE_SD_CD_PORT_ID               2
#if    (RTE_SD_CD_PORT_ID == 0)
#elif  (RTE_SD_CD_PORT_ID == 1)
#define RTE_SD_CD_PORT                  1
#define RTE_SD_CD_PIN                   13
#define RTE_SD_CD_FUNC                  7
#elif  (RTE_SD_CD_PORT_ID == 2)
#define RTE_SD_CD_PORT                  12
#define RTE_SD_CD_PIN                   8
#define RTE_SD_CD_FUNC                  7
#else
#error "Invalid SD_CD Pin Configuration!"
#endif

//     <o> SD_WP Pin <0=>NOT_USED <1=>P1_13 <2=>PC_8
#define RTE_SD_WP_PORT_ID               0
#if    (RTE_SD_WP_PORT_ID == 0)
#elif  (RTE_SD_WP_PORT_ID == 1)
#define RTE_SD_WP_PORT                  1
#define RTE_SD_WP_PIN                   13
#define RTE_SD_WP_FUNC                  7
#elif  (RTE_SD_WP_PORT_ID == 2)
#define RTE_SD_WP_PORT                  12
#define RTE_SD_WP_PIN                   8
#define RTE_SD_WP_FUNC                  7
#else
#error "Invalid SD_WP Pin Configuration!"
#endif

//     <o> SD_CLK Pin <0=>PC_0 <1=>CLK0
#define RTE_SD_CLK_PORT_ID              0
#if    (RTE_SD_CLK_PORT_ID == 0)
#define RTE_SD_CLK_PORT                 12
#define RTE_SD_CLK_PIN                  0
#define RTE_SD_CLK_FUNC                 7
#elif  (RTE_SD_CLK_PORT_ID == 1)
#define RTE_SD_CLK_PORT                 12
#define RTE_SD_CLK_PIN                  8
#define RTE_SD_CLK_FUNC                 4
#else
#error "Invalid SD_CLK Pin Configuration!"
#endif
//     <o> SD_CMD Pin <0=>P1_6 <1=>PC_10
#define RTE_SD_CMD_PORT_ID              1
#if    (RTE_SD_CMD_PORT_ID == 0)
#define RTE_SD_CMD_PORT                 1
#define RTE_SD_CMD_PIN                  6
#define RTE_SD_CMD_FUNC                 7
#elif  (RTE_SD_CMD_PORT_ID == 1)
#define RTE_SD_CMD_PORT                 12
#define RTE_SD_CMD_PIN                  10
#define RTE_SD_CMD_FUNC                 7
#else
#error "Invalid SD_CMD Pin Configuration!"
#endif
//     <o> SD_DAT0 Pin <0=>P1_9 <1=>PC_4
#define RTE_SD_DAT0_PORT_ID             1
#if    (RTE_SD_DAT0_PORT_ID == 0)
#define RTE_SD_DAT0_PORT                1
#define RTE_SD_DAT0_PIN                 9
#define RTE_SD_DAT0_FUNC                7
#elif  (RTE_SD_DAT0_PORT_ID == 1)
#define RTE_SD_DAT0_PORT                12
#define RTE_SD_DAT0_PIN                 4
#define RTE_SD_DAT0_FUNC                7
#else
#error "Invalid SD_DAT0 Pin Configuration!"
#endif
//     <o> SD_DAT1 Pin <0=>P1_10 <1=>PC_5
#define RTE_SD_DAT1_PORT_ID             1
#if    (RTE_SD_DAT1_PORT_ID == 0)
#define RTE_SD_DAT1_PORT                1
#define RTE_SD_DAT1_PIN                 10
#define RTE_SD_DAT1_FUNC                7
#elif  (RTE_SD_DAT1_PORT_ID == 1)
#define RTE_SD_DAT1_PORT                12
#define RTE_SD_DAT1_PIN                 5
#define RTE_SD_DAT1_FUNC                7
#else
#error "Invalid SD_DAT1 Pin Configuration!"
#endif
//     <o> SD_DAT2 Pin <0=>P1_11 <1=>PC_6
#define RTE_SD_DAT2_PORT_ID             1
#if    (RTE_SD_DAT2_PORT_ID == 0)
#define RTE_SD_DAT2_PORT                1
#define RTE_SD_DAT2_PIN                 11
#define RTE_SD_DAT2_FUNC                7
#elif  (RTE_SD_DAT2_PORT_ID == 1)
#define RTE_SD_DAT2_PORT                12
#define RTE_SD_DAT2_PIN                 6
#define RTE_SD_DAT2_FUNC                7
#else
#error "Invalid SD_DAT2 Pin Configuration!"
#endif
//     <o> SD_DAT3 Pin <0=>P1_12 <1=>PC_7
#define RTE_SD_DAT3_PORT_ID             1
#if    (RTE_SD_DAT3_PORT_ID == 0)
#define RTE_SD_DAT3_PORT                1
#define RTE_SD_DAT3_PIN                 12
#define RTE_SD_DAT3_FUNC                7
#elif  (RTE_SD_DAT3_PORT_ID == 1)
#define RTE_SD_DAT3_PORT                12
#define RTE_SD_DAT3_PIN                 7
#define RTE_SD_DAT3_FUNC                7
#else
#error "Invalid SD_DAT3 Pin Configuration!"
#endif
//     <o> SD_DAT4 Pin <0=>PC_11
#define RTE_SD_DAT4_PORT_ID             0
#if    (RTE_SD_DAT4_PORT_ID == 0)
#define RTE_SD_DAT4_PORT                12
#define RTE_SD_DAT4_PIN                 11
#define RTE_SD_DAT4_FUNC                7
#else
#error "Invalid SD_DAT4 Pin Configuration!"
#endif
//     <o> SD_DAT5 Pin <0=>PC_12
#define RTE_SD_DAT5_PORT_ID             0
#if    (RTE_SD_DAT5_PORT_ID == 0)
#define RTE_SD_DAT5_PORT                12
#define RTE_SD_DAT5_PIN                 12
#define RTE_SD_DAT5_FUNC                7
#else
#error "Invalid SD_DAT5 Pin Configuration!"
#endif
//     <o> SD_DAT6 Pin <0=>PC_13
#define RTE_SD_DAT6_PORT_ID             0
#if    (RTE_SD_DAT6_PORT_ID == 0)
#define RTE_SD_DAT6_PORT                12
#define RTE_SD_DAT6_PIN                 13
#define RTE_SD_DAT6_FUNC                7
#else
#error "Invalid SD_DAT6 Pin Configuration!"
#endif
//     <o> SD_DAT7 Pin <0=>PC_14
#define RTE_SD_DAT7_PORT_ID             0
#if    (RTE_SD_DAT7_PORT_ID == 0)
#define RTE_SD_DAT7_PORT                12
#define RTE_SD_DAT7_PIN                 14
#define RTE_SD_DAT7_FUNC                7
#else
#error "Invalid SD_DAT7 Pin Configuration!"
#endif
//   </h>
// </e>

// <e> I2C0 (Inter-integrated Circuit Interface 0) [Driver_I2C0]
// <i> Configuration settings for Driver_I2C0 in component ::Drivers:I2C
#define RTE_I2C0                        1
// </e>


// <e> I2C1 (Inter-integrated Circuit Interface 1) [Driver_I2C1]
// <i> Configuration settings for Driver_I2C1 in component ::Drivers:I2C
#define RTE_I2C1                        0

//   <o> I2C1_SCL Pin <0=>P2_4 <1=>PE_15
#define RTE_I2C1_SCL_PORT_ID            0
#if    (RTE_I2C1_SCL_PORT_ID == 0)
#define RTE_I2C1_SCL_PORT               2
#define RTE_I2C1_SCL_PIN                4
#define RTE_I2C1_SCL_FUNC               1
#elif  (RTE_I2C1_SCL_PORT_ID == 1)
#define RTE_I2C1_SCL_PORT               14
#define RTE_I2C1_SCL_PIN                15
#define RTE_I2C1_SCL_FUNC               2
#else
#error "Invalid I2C1_SCL Pin Configuration!"
#endif

//   <o> I2C1_SDA Pin <0=>P2_3 <1=>PE_13
#define RTE_I2C1_SDA_PORT_ID            0
#if    (RTE_I2C1_SDA_PORT_ID == 0)
#define RTE_I2C1_SDA_PORT               2
#define RTE_I2C1_SDA_PIN                3
#define RTE_I2C1_SDA_FUNC               1
#elif  (RTE_I2C1_SDA_PORT_ID == 1)
#define RTE_I2C1_SDA_PORT               14
#define RTE_I2C1_SDA_PIN                13
#define RTE_I2C1_SDA_FUNC               2
#else
#error "Invalid I2C1_SDA Pin Configuration!"
#endif

// </e>
// <e> USART0 (Universal synchronous asynchronous receiver transmitter)
#define RTE_USART0                      0

//   <o> U0_TX Pin <0=>P2_0 <1=>P6_4 <2=>P9_5 <3=>PF_10
//   <i> USART0 Serial Output pin
#define RTE_U0_TX_ID                    0
#if    (RTE_U0_TX_ID == 0)
#define RTE_U0_TX_PORT                  2
#define RTE_U0_TX_BIT                   0
#define RTE_U0_TX_FUNC                  1
#elif  (RTE_U0_TX_ID == 1)
#define RTE_U0_TX_PORT                  6
#define RTE_U0_TX_BIT                   4
#define RTE_U0_TX_FUNC                  2
#elif  (RTE_U0_TX_ID == 2)
#define RTE_U0_TX_PORT                  9
#define RTE_U0_TX_BIT                   5
#define RTE_U0_TX_FUNC                  7
#elif  (RTE_U0_TX_ID == 3)
#define RTE_U0_TX_PORT                  15
#define RTE_U0_TX_BIT                   10
#define RTE_U0_TX_FUNC                  1
#else
#error "Invalid U0_TX Pin Configuration!"
#endif

//   <o> U0_RX Pin <0=>P2_1 <1=>P6_5 <2=>P9_6 <3=>PF_11
//   <i> USART0 Serial Input pin
#define RTE_U0_RX_ID                    0
#if    (RTE_U0_RX_ID == 0)
#define RTE_U0_RX_PORT                  2
#define RTE_U0_RX_BIT                   1
#define RTE_U0_RX_FUNC                  1
#elif  (RTE_U0_RX_ID == 1)
#define RTE_U0_RX_PORT                  6
#define RTE_U0_RX_BIT                   5
#define RTE_U0_RX_FUNC                  2
#elif  (RTE_U0_RX_ID == 2)
#define RTE_U0_RX_PORT                  9
#define RTE_U0_RX_BIT                   6
#define RTE_U0_RX_FUNC                  7
#elif  (RTE_U0_RX_ID == 3)
#define RTE_U0_RX_PORT                  15
#define RTE_U0_RX_BIT                   11
#define RTE_U0_RX_FUNC                  1
#else
#error "Invalid U0_RX Pin Configuration!"
#endif

//     <e> Synchronous
//       <o> U0_UCLK Pin <0=>P2_2 <1=>P6_1 <2=>PF_8
//       <i> USART0 Serial Clock input/output synchronous mode
//     </e>
#define RTE_U0_UCLK_ID                  0
#if    (RTE_U0_UCLK_ID == 0)
#define RTE_U0_UCLK_PORT                2
#define RTE_U0_UCLK_BIT                 2
#define RTE_U0_UCLK_FUNC                1
#elif  (RTE_U0_UCLK_ID == 1)
#define RTE_U0_UCLK_PORT                6
#define RTE_U0_UCLK_BIT                 1
#define RTE_U0_UCLK_FUNC                2
#elif  (RTE_U0_UCLK_ID == 2)
#define RTE_U0_UCLK_PORT                15
#define RTE_U0_UCLK_BIT                 8
#define RTE_U0_UCLK_FUNC                1
#else
#error "Invalid U0_UCLK Pin Configuration!"
#endif
// </e>
// <e> UART1 (Universal asynchronous receiver transmitter)
#define RTE_UART1                       0

//   <o> U1_TX Pin <0=>P1_13 <1=>P3_4 <2=>P5_6 <3=>PC_13 <4=>PE_11
//   <i> USRT0 Serial Output pin
#define RTE_U1_TX_ID                    0
#if    (RTE_U1_TX_ID == 0)
#define RTE_U1_TX_PORT                  1
#define RTE_U1_TX_BIT                   13
#define RTE_U1_TX_FUNC                  1
#elif  (RTE_U1_TX_ID == 1)
#define RTE_U1_TX_PORT                  3
#define RTE_U1_TX_BIT                   4
#define RTE_U1_TX_FUNC                  4
#elif  (RTE_U1_TX_ID == 2)
#define RTE_U1_TX_PORT                  5
#define RTE_U1_TX_BIT                   6
#define RTE_U1_TX_FUNC                  4
#elif  (RTE_U1_TX_ID == 3)
#define RTE_U1_TX_PORT                  12
#define RTE_U1_TX_BIT                   13
#define RTE_U1_TX_FUNC                  2
#elif  (RTE_U1_TX_ID == 4)
#define RTE_U1_TX_PORT                  14
#define RTE_U1_TX_BIT                   11
#define RTE_U1_TX_FUNC                  2
#else
#error "Invalid U1_TX Pin Configuration!"
#endif

//   <o> U1_RX Pin <0=>P1_14 <1=>P3_5 <2=>P5_7 <3=>PC_14 <4=>PE_12
//   <i> UART1 Serial Input pin
#define RTE_U1_RX_ID                    0
#if    (RTE_U1_RX_ID == 0)
#define RTE_U1_RX_PORT                  1
#define RTE_U1_RX_BIT                   14
#define RTE_U1_RX_FUNC                  1
#elif  (RTE_U1_RX_ID == 1)
#define RTE_U1_RX_PORT                  3
#define RTE_U1_RX_BIT                   5
#define RTE_U1_RX_FUNC                  4
#elif  (RTE_U1_RX_ID == 2)
#define RTE_U1_RX_PORT                  5
#define RTE_U1_RX_BIT                   7
#define RTE_U1_RX_FUNC                  4
#elif  (RTE_U1_RX_ID == 3)
#define RTE_U1_RX_PORT                  12
#define RTE_U1_RX_BIT                   14
#define RTE_U1_RX_FUNC                  2
#elif  (RTE_U1_RX_ID == 4)
#define RTE_U1_RX_PORT                  14
#define RTE_U1_RX_BIT                   12
#define RTE_U1_RX_FUNC                  2
#else
#error "Invalid U1_RX Pin Configuration!"
#endif

//     <e> Hardware flow control
//       <o1> UART1_CTS Pin <0=>P1_11 <1=>P5_4 <2=>PC_2 <3=>PE_7
//       <o2> UART1_RTS Pin <0=>P1_9  <1=>P5_2 <2=>PC_3 <3=>PE_5
//       <o3.0> Manual CTS/RTS
//     </e>
#define RTE_UART1_HW_FLOW               0
#define RTE_UART1_CTS_ID                0
#define RTE_UART1_RTS_ID                0
#define RTE_UART1_MANUAL_FLOW           0
#if    (RTE_U1_CTS_ID == 0)
#define RTE_U1_CTS_PORT                 1
#define RTE_U1_CTS_BIT                  11
#define RTE_U1_CTS_FUNC                 1
#elif  (RTE_U1_CTS_ID == 1)
#define RTE_U1_CTS_PORT                 5
#define RTE_U1_CTS_BIT                  4
#define RTE_U1_CTS_FUNC                 4
#elif  (RTE_U1_CTS_ID == 2)
#define RTE_U1_CTS_PORT                 12
#define RTE_U1_CTS_BIT                  2
#define RTE_U1_CTS_FUNC                 2
#elif  (RTE_U1_CTS_ID == 3)
#define RTE_U1_CTS_PORT                 14
#define RTE_U1_CTS_BIT                  7
#define RTE_U1_CTS_FUNC                 2
#else
#error "Invalid U1_CTS Pin Configuration!"
#endif
#if    (RTE_U1_RTS_ID == 0)
#define RTE_U1_RTS_PORT                 1
#define RTE_U1_RTS_BIT                  9
#define RTE_U1_RTS_FUNC                 1
#elif  (RTE_U1_RTS_ID == 1)
#define RTE_U1_RTS_PORT                 5
#define RTE_U1_RTS_BIT                  2
#define RTE_U1_RTS_FUNC                 4
#elif  (RTE_U1_RTS_ID == 2)
#define RTE_U1_RTS_PORT                 12
#define RTE_U1_RTS_BIT                  3
#define RTE_U1_RTS_FUNC                 2
#elif  (RTE_U1_RTS_ID == 3)
#define RTE_U1_RTS_PORT                 14
#define RTE_U1_RTS_BIT                  5
#define RTE_U1_RTS_FUNC                 2
#else
#error "Invalid U1_RTS Pin Configuration!"
#endif

// </e>
// <e> USART2 (Universal synchronous asynchronous receiver transmitter)
#define RTE_USART2                      0

//   <o> U2_TX Pin <0=>P1_15 <1=>P2_10 <2=>P7_1 <3=>PA_1
//   <i> USART2 Serial Output pin
#define RTE_U2_TX_ID                    0
#if    (RTE_U2_TX_ID == 0)
#define RTE_U2_TX_PORT                  1
#define RTE_U2_TX_BIT                   15
#define RTE_U2_TX_FUNC                  1
#elif  (RTE_U2_TX_ID == 1)
#define RTE_U2_TX_PORT                  2
#define RTE_U2_TX_BIT                   10
#define RTE_U2_TX_FUNC                  2
#elif  (RTE_U2_TX_ID == 2)
#define RTE_U2_TX_PORT                  7
#define RTE_U2_TX_BIT                   1
#define RTE_U2_TX_FUNC                  6
#elif  (RTE_U2_TX_ID == 3)
#define RTE_U2_TX_PORT                  10
#define RTE_U2_TX_BIT                   1
#define RTE_U2_TX_FUNC                  3
#else
#error "Invalid U2_TX Pin Configuration!"
#endif

//   <o> U2_RX Pin <0=>P1_16 <1=>P2_11 <2=>P7_2 <3=>PA_2
//   <i> USART2 Serial Input pin
#define RTE_U2_RX_ID                    0
#if    (RTE_U2_RX_ID == 0)
#define RTE_U2_RX_PORT                  1
#define RTE_U2_RX_BIT                   16
#define RTE_U2_RX_FUNC                  1
#elif  (RTE_U2_RX_ID == 1)
#define RTE_U2_RX_PORT                  2
#define RTE_U2_RX_BIT                   11
#define RTE_U2_RX_FUNC                  2
#elif  (RTE_U2_RX_ID == 2)
#define RTE_U2_RX_PORT                  7
#define RTE_U2_RX_BIT                   2
#define RTE_U2_RX_FUNC                  6
#elif  (RTE_U2_RX_ID == 3)
#define RTE_U2_RX_PORT                  10
#define RTE_U2_RX_BIT                   2
#define RTE_U2_RX_FUNC                  3
#else
#error "Invalid U2_RX Pin Configuration!"
#endif

//     <e> Synchronous
//       <o> U2_UCLK Pin <0=>P1_17 <1=>P2_12
//       <i> USART2 Serial Clock input/output synchronous mode
//     </e>
#define RTE_U2_UCLK_ID                  0
#if    (RTE_U2_UCLK_ID == 0)
#define RTE_U2_UCLK_PORT                1
#define RTE_U2_UCLK_BIT                 17
#define RTE_U2_UCLK_FUNC                1
#elif  (RTE_U2_UCLK_ID == 1)
#define RTE_U2_UCLK_PORT                2
#define RTE_U2_UCLK_BIT                 12
#define RTE_U2_UCLK_FUNC                7
#else
#error "Invalid U2_UCLK Pin Configuration!"
#endif
// </e>

// <e> USART3 (Universal synchronous asynchronous receiver transmitter)
#define RTE_USART3                      1

//   <o> U3_TX Pin <0=>P2_3 <1=>P4_1 <2=>P9_3 <3=>PF_2
//   <i> USART3 Serial Output pin
#define RTE_U3_TX_ID                    0
#if    (RTE_U3_TX_ID == 0)
#define RTE_U3_TX_PORT                  2
#define RTE_U3_TX_BIT                   3
#define RTE_U3_TX_FUNC                  2
#elif  (RTE_U3_TX_ID == 1)
#define RTE_U3_TX_PORT                  4
#define RTE_U3_TX_BIT                   1
#define RTE_U3_TX_FUNC                  6
#elif  (RTE_U3_TX_ID == 2)
#define RTE_U3_TX_PORT                  9
#define RTE_U3_TX_BIT                   3
#define RTE_U3_TX_FUNC                  7
#elif  (RTE_U3_TX_ID == 3)
#define RTE_U3_TX_PORT                  15
#define RTE_U3_TX_BIT                   2
#define RTE_U3_TX_FUNC                  1
#else
#error "Invalid U3_TX Pin Configuration!"
#endif

//   <o> U3_RX Pin <0=>P2_4 <1=>P4_2 <2=>P9_4 <3=>PF_3
//   <i> USART3 Serial Input pin
#define RTE_U3_RX_ID                    0
#if    (RTE_U3_RX_ID == 0)
#define RTE_U3_RX_PORT                  2
#define RTE_U3_RX_BIT                   4
#define RTE_U3_RX_FUNC                  2
#elif  (RTE_U3_RX_ID == 1)
#define RTE_U3_RX_PORT                  4
#define RTE_U3_RX_BIT                   2
#define RTE_U3_RX_FUNC                  6
#elif  (RTE_U3_RX_ID == 2)
#define RTE_U3_RX_PORT                  9
#define RTE_U3_RX_BIT                   4
#define RTE_U3_RX_FUNC                  7
#elif  (RTE_U3_RX_ID == 3)
#define RTE_U3_RX_PORT                  15
#define RTE_U3_RX_BIT                   3
#define RTE_U3_RX_FUNC                  1
#else
#error "Invalid U3_RX Pin Configuration!"
#endif

//     <e> Synchronous
//       <o> U3_UCLK Pin <0=>P2_7 <1=>P4_0 <2=>PF_5
//       <i> USART3 Serial Clock input/output synchronous mode
//     </e>
#define RTE_U3_UCLK_ID                  0
#if    (RTE_U3_UCLK_ID == 0)
#define RTE_U3_UCLK_PORT                2
#define RTE_U3_UCLK_BIT                 7
#define RTE_U3_UCLK_FUNC                2
#elif  (RTE_U3_UCLK_ID == 1)
#define RTE_U3_UCLK_PORT                4
#define RTE_U3_UCLK_BIT                 0
#define RTE_U3_UCLK_FUNC                6
#elif  (RTE_U3_UCLK_ID == 2)
#define RTE_U3_UCLK_PORT                15
#define RTE_U3_UCLK_BIT                 5
#define RTE_U3_UCLK_FUNC                1
#else
#error "Invalid U3_UCLK Pin Configuration!"
#endif

// </e>

#endif  /* __RTE_DEVICE_H */
