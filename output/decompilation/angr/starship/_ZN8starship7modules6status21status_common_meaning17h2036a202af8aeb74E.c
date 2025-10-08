long long starship::modules::status::status_common_meaning(unsigned int a0)
{
    void* v1;  // rax

    v1 = 0;
    if (a0 > 128)
        return 0;
    switch (a0)
    {
    case 0:
        return 1;
    case 1:
        return "ERRORUSAGEDATAERRNOINPUTNOUSERNOHOSTUNAVAILABLEOSERROSFILECANTCREATIOERRNOPERMCONFIGHUPINTILLIOTBUSFPESTKFLTError in module `sudo`:\n";
    case 2: case 64:
        return "USAGEDATAERRNOINPUTNOUSERNOHOSTUNAVAILABLEOSERROSFILECANTCREATIOERRNOPERMCONFIGHUPINTILLIOTBUSFPESTKFLTError in module `sudo`:\n";
    case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 33: case 34: case 35: case 36: case 37: case 38: case 39: case 40: case 41: case 42: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 59: case 60: case 61: case 62: case 63: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 91: case 92: case 93: case 94: case 95: case 96: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122: case 123: case 124: case 125:
LABEL_bbe25d:
        return v1;
    case 65:
        return "DATAERRNOINPUTNOUSERNOHOSTUNAVAILABLEOSERROSFILECANTCREATIOERRNOPERMCONFIGHUPINTILLIOTBUSFPESTKFLTError in module `sudo`:\n";
    case 66:
        return "NOINPUTNOUSERNOHOSTUNAVAILABLEOSERROSFILECANTCREATIOERRNOPERMCONFIGHUPINTILLIOTBUSFPESTKFLTError in module `sudo`:\n";
    case 67:
        return "NOUSERNOHOSTUNAVAILABLEOSERROSFILECANTCREATIOERRNOPERMCONFIGHUPINTILLIOTBUSFPESTKFLTError in module `sudo`:\n";
    case 68:
        return "NOHOSTUNAVAILABLEOSERROSFILECANTCREATIOERRNOPERMCONFIGHUPINTILLIOTBUSFPESTKFLTError in module `sudo`:\n";
    case 69:
        return "UNAVAILABLEOSERROSFILECANTCREATIOERRNOPERMCONFIGHUPINTILLIOTBUSFPESTKFLTError in module `sudo`:\n";
    case 70:
        v1 = "SOFTWAREBorrowedENOTUNIQELIBEXECAbsoluteno_proxyx-cp1256FilePathCherokeecherokeegeorgiantifinaghhostname.haxelibClient: a structENOTSOCKpathspeciso88598upstreamGurmukhiTai_Thamlocation.xonshrcbuf.yamlOS_CLOUDWorktreesafecrlfiso88596";
        break;
    case 71:
        return "OSERROSFILECANTCREATIOERRNOPERMCONFIGHUPINTILLIOTBUSFPESTKFLTError in module `sudo`:\n";
    case 72:
        return "OSFILECANTCREATIOERRNOPERMCONFIGHUPINTILLIOTBUSFPESTKFLTError in module `sudo`:\n";
    case 73:
        return "CANTCREATIOERRNOPERMCONFIGHUPINTILLIOTBUSFPESTKFLTError in module `sudo`:\n";
    case 74:
        return "IOERRNOPERMCONFIGHUPINTILLIOTBUSFPESTKFLTError in module `sudo`:\n";
    case 75:
        v1 = "TEMPFAILfd != -1Asteriskcsibm866home dir";
        break;
    case 76:
        v1 = "PROTOCOLprofile.";
        break;
    case 77: case 126:
        return "NOPERMCONFIGHUPINTILLIOTBUSFPESTKFLTError in module `sudo`:\n";
    case 78:
        return "CONFIGHUPINTILLIOTBUSFPESTKFLTError in module `sudo`:\n";
    case 127:
        v1 = "NOTFOUND";
        break;
    default:
        return 0;
    }
    goto LABEL_bbe25d;
}
