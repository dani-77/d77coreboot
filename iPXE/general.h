#undef PXE_STACK               /* PXE stack in iPXE - you want this! */
#undef PXE_MENU                /* PXE menu booting */
#undef DOWNLOAD_PROTO_TFTP     /* Trivial File Transfer Protocol */
#undef SANBOOT_PROTO_ISCSI     /* iSCSI protocol */
#undef SANBOOT_PROTO_AOE       /* AoE protocol */
#undef SANBOOT_PROTO_IB_SRP    /* Infiniband SCSI RDMA protocol */
#undef SANBOOT_PROTO_FCP       /* Fibre Channel protocol */
#undef CRYPTO_80211_WEP        /* WEP encryption (deprecated and insecure!) */
#undef CRYPTO_80211_WPA        /* WPA Personal, authenticating with passphrase */
#undef CRYPTO_80211_WPA2       /* Add support for stronger WPA cryptography */
#undef IMAGE_NBI               /* NBI image support */
#undef IMAGE_ELF               /* ELF image support */
#undef IMAGE_MULTIBOOT         /* MultiBoot image support */
#undef IMAGE_PXE               /* PXE image support */
#define        IMAGE_SCRIPT            /* iPXE script image support */
#define        IMAGE_BZIMAGE           /* Linux bzImage image support */
#undef IMAGE_COMBOOT           /* SYSLINUX COMBOOT image support */
#undef IMAGE_EFI               /* EFI image support */
#undef IMAGE_SDI               /* SDI image support */
#undef NVO_CMD                 /* Non-volatile option storage commands */
#define CONFIG_CMD              /* Option configuration console */
#undef FCMGMT_CMD              /* Fibre Channel management commands */
#undef ROUTE_CMD               /* Routing table management commands */
#define IMAGE_CMD               /* Image management commands */
#undef SANBOOT_CMD             /* SAN boot commands */
#undef MENU_CMD                /* Menu commands */
#undef LOGIN_CMD               /* Login command */
#undef SYNC_CMD                /* Sync command */
#undef NSLOOKUP_CMD            /* DNS resolving command */
#undef TIME_CMD                /* Time commands */
#undef DIGEST_CMD              /* Image crypto digest commands */
#undef LOTEST_CMD              /* Loopback testing commands */
#undef VLAN_CMD                /* VLAN commands */
#undef PXE_CMD         /* PXE commands */
#undef REBOOT_CMD             /* Reboot command */
#undef IMAGE_TRUST_CMD /* Image trust management commands */
