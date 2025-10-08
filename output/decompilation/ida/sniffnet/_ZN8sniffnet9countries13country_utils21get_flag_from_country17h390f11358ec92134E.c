__int64 __fastcall sniffnet::countries::country_utils::get_flag_from_country(
        __int64 a1,
        char a2,
        char a3,
        char a4,
        __int64 a5,
        __int64 a6,
        float a7,
        char a8,
        unsigned __int8 a9)
{
  unsigned __int8 v13; // r13
  const char *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  const char *v20; // r14
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  char v26; // [rsp+Bh] [rbp-CDh] BYREF
  float v27; // [rsp+Ch] [rbp-CCh]
  __int128 v28; // [rsp+10h] [rbp-C8h]
  __int64 v29; // [rsp+20h] [rbp-B8h]
  _BYTE v30[24]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-90h]
  __int128 v32; // [rsp+60h] [rbp-78h] BYREF
  __int64 v33; // [rsp+70h] [rbp-68h]
  __int128 v34; // [rsp+78h] [rbp-60h] BYREF
  __int64 v35; // [rsp+88h] [rbp-50h]

  v27 = a7;
  v26 = a2;
  <T as alloc::string::SpecToString>::spec_to_string(&v32, &v26);
  v13 = 1;
  switch ( v26 )
  {
    case 0:
      v14 = (const char *)&unk_28D689;
      v15 = 32955LL;
      break;
    case 1:
      v14 = aSvgXmlnsHttpWw;
      v15 = 237LL;
      break;
    case 2:
      v14 = aSvgXmlnsHttpWw_0;
      v15 = 20740LL;
      break;
    case 3:
      v14 = aSvgXmlnsHttpWw_1;
      v15 = 713LL;
      break;
    case 4:
      v14 = (const char *)&unk_29ABFE;
      v15 = 35123LL;
      break;
    case 5:
      v14 = aSvgXmlnsHttpWw_2;
      v15 = 3200LL;
      break;
    case 6:
      v14 = aSvgXmlnsHttpWw_3;
      v15 = 217LL;
      break;
    case 7:
      v14 = aSvgXmlnsHttpWw_4;
      v15 = 1557LL;
      break;
    case 8:
      v14 = aSvgXmlnsHttpWw_5;
      v15 = 2812LL;
      break;
    case 9:
      v14 = aSvgXmlnsHttpWw_6;
      v15 = 3400LL;
      break;
    case 10:
      v14 = aSvgXmlnsHttpWw_7;
      v15 = 32157LL;
      break;
    case 11:
      v14 = aSvgXmlnsHttpWw_8;
      v15 = 219LL;
      break;
    case 12:
    case 95:
      v14 = aSvgXmlnsHttpWw_76;
      v15 = 1321LL;
      break;
    case 13:
      v14 = (const char *)&unk_2ADF5B;
      v15 = 9373LL;
      break;
    case 14:
      v14 = aSvgXmlnsHttpWw_9;
      v15 = 466LL;
      break;
    case 15:
      v14 = aSvgXmlnsHttpWw_10;
      v15 = 489LL;
      break;
    case 16:
      v14 = aSvgXmlnsHttpWw_11;
      v15 = 1254LL;
      break;
    case 17:
      v14 = aSvgXmlnsHttpWw_12;
      v15 = 593LL;
      break;
    case 18:
      v14 = aSvgXmlnsHttpWw_13;
      v15 = 179LL;
      break;
    case 19:
      v14 = aSvgXmlnsHttpWw_14;
      v15 = 264LL;
      break;
    case 20:
      v14 = aSvgXmlnsHttpWw_15;
      v15 = 330LL;
      break;
    case 21:
      v14 = aSvgXmlnsHttpWw_16;
      v15 = 260LL;
      break;
    case 22:
      v14 = aSvgXmlnsHttpWw_17;
      v15 = 244LL;
      break;
    case 23:
      v14 = aSvgXmlnsHttpWw_18;
      v15 = 1012LL;
      break;
    case 24:
      v14 = aSvgXmlnsHttpWw_19;
      v15 = 431LL;
      break;
    case 25:
    case 74:
    case 79:
    case 86:
    case -116:
    case -107:
    case -77:
    case -69:
    case -14:
    case -11:
      v14 = aSvgXmlnsHttpWw_202;
      v15 = 220LL;
      break;
    case 26:
      v14 = aSvgXmlnsHttpWw_20;
      v15 = 22560LL;
      break;
    case 27:
      v14 = aSvgXmlnsHttpWw_21;
      v15 = 14190LL;
      break;
    case 28:
      v14 = (const char *)&unk_2BA918;
      v15 = 111420LL;
      break;
    case 29:
    case -91:
      v14 = aSvgXmlnsHttpWw_138;
      v15 = 210LL;
      break;
    case 30:
      v14 = aSvgXmlnsHttpWw_22;
      v15 = 7952LL;
      break;
    case 31:
      v14 = aSvgXmlnsHttpWw_23;
      v15 = 492LL;
      break;
    case 32:
      v14 = aSvgXmlnsHttpWw_24;
      v15 = 24729LL;
      break;
    case 33:
      v14 = aSvgXmlnsHttpWw_25;
      v15 = 525LL;
      break;
    case 34:
      v14 = aSvgXmlnsHttpWw_26;
      v15 = 226LL;
      break;
    case 35:
      v14 = aSvgXmlnsHttpWw_27;
      v15 = 5855LL;
      break;
    case 36:
      v14 = (const char *)&unk_2DF7B7;
      v15 = 46083LL;
      break;
    case 37:
      v14 = aSvgXmlnsHttpWw_28;
      v15 = 635LL;
      break;
    case 38:
      v14 = aSvgXmlnsHttpWw_29;
      v15 = 3065LL;
      break;
    case 39:
      v14 = aSvgXmlnsHttpWw_30;
      v15 = 335LL;
      break;
    case 40:
      v14 = aSvgXmlnsHttpWw_31;
      v15 = 620LL;
      break;
    case 41:
      v14 = aSvgXmlnsHttpWw_32;
      v15 = 432LL;
      break;
    case 42:
      v14 = aSvgXmlnsHttpWw_33;
      v15 = 253LL;
      break;
    case 43:
      v14 = aSvgXmlnsHttpWw_34;
      v15 = 254LL;
      break;
    case 44:
      v14 = aSvgXmlnsHttpWw_35;
      v15 = 1875LL;
      break;
    case 45:
      v14 = aSvgXmlnsHttpWw_36;
      v15 = 503LL;
      break;
    case 46:
      v14 = aSvgXmlnsHttpWw_37;
      v15 = 759LL;
      break;
    case 47:
      v14 = aSvgXmlnsHttpWw_38;
      v15 = 764LL;
      break;
    case 48:
      v14 = aSvgXmlnsHttpWw_39;
      v15 = 263LL;
      break;
    case 49:
      v14 = aSvgXmlnsHttpWw_40;
      v15 = 267LL;
      break;
    case 50:
      v14 = aSvgXmlnsHttpWw_41;
      v15 = 562LL;
      break;
    case 51:
      v14 = aSvgXmlnsHttpWw_42;
      v15 = 1355LL;
      break;
    case 52:
      v14 = aSvgXmlnsHttpWw_43;
      v15 = 616LL;
      break;
    case 53:
      v14 = aSvgXmlnsHttpWw_44;
      v15 = 2410LL;
      break;
    case 54:
      v14 = aSvgXmlnsHttpWw_45;
      v15 = 5912LL;
      break;
    case 55:
      v14 = aSvgXmlnsHttpWw_46;
      v15 = 214LL;
      break;
    case 56:
      v14 = aSvgXmlnsHttpWw_47;
      v15 = 199LL;
      break;
    case 57:
      v14 = (const char *)&unk_2EFEE7;
      v15 = 531LL;
      break;
    case 58:
      v14 = aSvgXmlnsHttpWw_48;
      v15 = 225LL;
      break;
    case 59:
      v14 = aSvgXmlnsHttpWw_49;
      v15 = 14851LL;
      break;
    case 60:
      v14 = (const char *)&unk_2F3BDE;
      v15 = 107561LL;
      break;
    case 61:
      v14 = aSvgXmlnsHttpWw_50;
      v15 = 283LL;
      break;
    case 62:
      v14 = (const char *)&unk_30E122;
      v15 = 28743LL;
      break;
    case 63:
      v14 = aSvgXmlnsHttpWw_51;
      v15 = 295LL;
      break;
    case 64:
      v14 = aSvgXmlnsHttpWw_52;
      v15 = 9740LL;
      break;
    case 65:
      v14 = aSvgXmlnsHttpWw_53;
      v15 = 718LL;
      break;
    case 66:
      v14 = aSvgXmlnsHttpWw_54;
      v15 = 3171LL;
      break;
    case 67:
      v14 = (const char *)&unk_3187CD;
      v15 = 90187LL;
      break;
    case 68:
      v14 = aSvgXmlnsHttpWw_55;
      v15 = 1164LL;
      break;
    case 69:
      v14 = aSvgXmlnsHttpWw_56;
      v15 = 223LL;
      break;
    case 70:
      v14 = (const char *)&unk_32ED83;
      v15 = 25135LL;
      break;
    case 71:
      v14 = aSvgXmlnsHttpWw_57;
      v15 = 29595LL;
      break;
    case 72:
      v14 = aSvgXmlnsHttpWw_58;
      v15 = 725LL;
      break;
    case 73:
      v14 = aSvgXmlnsHttpWw_59;
      v15 = 515LL;
      break;
    case 75:
      v14 = aSvgXmlnsHttpWw_60;
      v15 = 248LL;
      break;
    case 76:
      v14 = aSvgXmlnsHttpWw_61;
      v15 = 518LL;
      break;
    case 77:
      v14 = aSvgXmlnsHttpWw_62;
      v15 = 1567LL;
      break;
    case 78:
      v14 = aSvgXmlnsHttpWw_63;
      v15 = 1348LL;
      break;
    case 80:
      v14 = aSvgXmlnsHttpWw_64;
      v15 = 569LL;
      break;
    case 81:
      v14 = aSvgXmlnsHttpWw_65;
      v15 = 264LL;
      break;
    case 82:
      v14 = aSvgXmlnsHttpWw_66;
      v15 = 2756LL;
      break;
    case 83:
      v14 = aSvgXmlnsHttpWw_67;
      v15 = 215LL;
      break;
    case 84:
      v14 = aSvgXmlnsHttpWw_68;
      v15 = 481LL;
      break;
    case 85:
      v14 = aSvgXmlnsHttpWw_69;
      v15 = 269LL;
      break;
    case 87:
      v14 = aSvgXmlnsHttpWw_70;
      v15 = 5067LL;
      break;
    case 88:
      v14 = aSvgXmlnsHttpWw_71;
      v15 = 820LL;
      break;
    case 89:
      v14 = (const char *)&unk_33FF4F;
      v15 = 32518LL;
      break;
    case 90:
      v14 = (const char *)&unk_347E55;
      v15 = 34519LL;
      break;
    case 91:
      v14 = aSvgXmlnsHttpWw_72;
      v15 = 5056LL;
      break;
    case 92:
      v14 = aSvgXmlnsHttpWw_73;
      v15 = 771LL;
      break;
    case 93:
      v14 = aSvgXmlnsHttpWw_74;
      v15 = 452LL;
      break;
    case 94:
      v14 = aSvgXmlnsHttpWw_75;
      v15 = 693LL;
      break;
    case 96:
      v14 = aSvgXmlnsHttpWw_77;
      v15 = 1039LL;
      break;
    case 97:
      v14 = aSvgXmlnsHttpWw_78;
      v15 = 41303LL;
      break;
    case 98:
      v14 = (const char *)&unk_35CAF7;
      v15 = 14153LL;
      break;
    case 99:
      v14 = aSvgXmlnsHttpWw_79;
      v15 = 248LL;
      break;
    case 100:
      v14 = aSvgXmlnsHttpWw_80;
      v15 = 170LL;
      break;
    case 101:
      v14 = aSvgXmlnsHttpWw_81;
      v15 = 266LL;
      break;
    case 102:
      v14 = aSvgXmlnsHttpWw_82;
      v15 = 841LL;
      break;
    case 103:
      v14 = aSvgXmlnsHttpWw_83;
      v15 = 9749LL;
      break;
    case 104:
      v14 = aSvgXmlnsHttpWw_84;
      v15 = 911LL;
      break;
    case 105:
      v14 = aSvgXmlnsHttpWw_85;
      v15 = 22645LL;
      break;
    case 106:
      v14 = aSvgXmlnsHttpWw_86;
      v15 = 1441LL;
      break;
    case 107:
      v14 = aSvgXmlnsHttpWw_87;
      v15 = 14008LL;
      break;
    case 108:
      v14 = aSvgXmlnsHttpWw_88;
      v15 = 469LL;
      break;
    case 109:
      v14 = aSvgXmlnsHttpWw_89;
      v15 = 266LL;
      break;
    case 110:
      v14 = aSvgXmlnsHttpWw_90;
      v15 = 7072LL;
      break;
    case 111:
      v14 = aSvgXmlnsHttpWw_91;
      v15 = 358LL;
      break;
    case 112:
      v14 = aSvgXmlnsHttpWw_92;
      v15 = 635LL;
      break;
    case 113:
      v14 = aSvgXmlnsHttpWw_93;
      v15 = 424LL;
      break;
    case 114:
      v14 = aSvgXmlnsHttpWw_94;
      v15 = 1296LL;
      break;
    case 115:
      v14 = aSvgXmlnsHttpWw_95;
      v15 = 3307LL;
      break;
    case 116:
      v14 = (const char *)&unk_36FCAA;
      v15 = 6934LL;
      break;
    case 117:
      v14 = aSvgXmlnsHttpWw_96;
      v15 = 5639LL;
      break;
    case 118:
      v14 = (const char *)&unk_372DC7;
      v15 = 985LL;
      break;
    case 119:
      v14 = aSvgXmlnsHttpWw_97;
      v15 = 749LL;
      break;
    case 120:
      v14 = aSvgXmlnsHttpWw_98;
      v15 = 724LL;
      break;
    case 121:
      v14 = aSvgXmlnsHttpWw_99;
      v15 = 901LL;
      break;
    case 122:
      v14 = aSvgXmlnsHttpWw_100;
      v15 = 449LL;
      break;
    case 123:
      v14 = aSvgXmlnsHttpWw_101;
      v15 = 23666LL;
      break;
    case 124:
      v14 = aSvgXmlnsHttpWw_102;
      v15 = 6984LL;
      break;
    case 125:
      v14 = aSvgXmlnsHttpWw_103;
      v15 = 405LL;
      break;
    case 126:
      v14 = aSvgXmlnsHttpWw_104;
      v15 = 2747LL;
      break;
    case 127:
      v14 = aSvgXmlnsHttpWw_105;
      v15 = 339LL;
      break;
    case -128:
      v14 = aSvgXmlnsHttpWw_106;
      v15 = 8035LL;
      break;
    case -127:
      v14 = (const char *)&unk_37E167;
      v15 = 11227LL;
      break;
    case -126:
      v14 = aSvgXmlnsHttpWw_107;
      v15 = 661LL;
      break;
    case -125:
      v14 = aSvgXmlnsHttpWw_108;
      v15 = 1193LL;
      break;
    case -124:
      v14 = aSvgXmlnsHttpWw_109;
      v15 = 416LL;
      break;
    case -123:
      v14 = aSvgXmlnsHttpWw_110;
      v15 = 214LL;
      break;
    case -122:
      v14 = aSvgXmlnsHttpWw_111;
      v15 = 212LL;
      break;
    case -121:
      v14 = aSvgXmlnsHttpWw_112;
      v15 = 477LL;
      break;
    case -120:
      v14 = aSvgXmlnsHttpWw_113;
      v15 = 239LL;
      break;
    case -119:
      v14 = aSvgXmlnsHttpWw_114;
      v15 = 216LL;
      break;
    case -118:
      v14 = aSvgXmlnsHttpWw_115;
      v15 = 10990LL;
      break;
    case -117:
      v14 = (const char *)&unk_38465C;
      v15 = 62526LL;
      break;
    case -115:
      v14 = aSvgXmlnsHttpWw_116;
      v15 = 276LL;
      break;
    case -114:
      v14 = aSvgXmlnsHttpWw_117;
      v15 = 715LL;
      break;
    case -113:
      v14 = aSvgXmlnsHttpWw_118;
      v15 = 368LL;
      break;
    case -112:
      v14 = aSvgXmlnsHttpWw_119;
      v15 = 250LL;
      break;
    case -111:
      v14 = aSvgXmlnsHttpWw_120;
      v15 = 654LL;
      break;
    case -110:
      v14 = aSvgXmlnsHttpWw_121;
      v15 = 1395LL;
      break;
    case -109:
      v14 = aSvgXmlnsHttpWw_122;
      v15 = 1481LL;
      break;
    case -108:
      v14 = aSvgXmlnsHttpWw_123;
      v15 = 22917LL;
      break;
    case -106:
      v14 = aSvgXmlnsHttpWw_124;
      v15 = 429LL;
      break;
    case -105:
      v14 = aSvgXmlnsHttpWw_125;
      v15 = 6276LL;
      break;
    case -104:
      v14 = aSvgXmlnsHttpWw_126;
      v15 = 8535LL;
      break;
    case -103:
      v14 = aSvgXmlnsHttpWw_127;
      v15 = 288LL;
      break;
    case -102:
      v14 = aSvgXmlnsHttpWw_128;
      v15 = 272LL;
      break;
    case -101:
      v14 = aSvgXmlnsHttpWw_129;
      v15 = 3667LL;
      break;
    case -100:
      v14 = (const char *)&unk_39F43D;
      v15 = 94246LL;
      break;
    case -99:
      v14 = aSvgXmlnsHttpWw_130;
      v15 = 1277LL;
      break;
    case -98:
      v14 = aSvgXmlnsHttpWw_131;
      v15 = 2521LL;
      break;
    case -97:
      v14 = aSvgXmlnsHttpWw_132;
      v15 = 930LL;
      break;
    case -96:
      v14 = aSvgXmlnsHttpWw_133;
      v15 = 1240LL;
      break;
    case -95:
      v14 = aSvgXmlnsHttpWw_134;
      v15 = 259LL;
      break;
    case -94:
      v14 = aSvgXmlnsHttpWw_135;
      v15 = 5800LL;
      break;
    case -93:
      v14 = aSvgXmlnsHttpWw_136;
      v15 = 239LL;
      break;
    case -92:
      v14 = aSvgXmlnsHttpWw_137;
      v15 = 17749LL;
      break;
    case -90:
    case -56:
      v14 = aSvgXmlnsHttpWw_164;
      v15 = 301LL;
      break;
    case -89:
      v14 = aSvgXmlnsHttpWw_139;
      v15 = 956LL;
      break;
    case -88:
      v14 = aSvgXmlnsHttpWw_140;
      v15 = 595LL;
      break;
    case -87:
      v14 = aSvgXmlnsHttpWw_141;
      v15 = 838LL;
      break;
    case -86:
      v14 = aSvgXmlnsHttpWw_142;
      v15 = 2034LL;
      break;
    case -85:
      v14 = (const char *)&unk_3BEBBB;
      v15 = 21777LL;
      break;
    case -84:
      v14 = aSvgXmlnsHttpWw_143;
      v15 = 682LL;
      break;
    case -83:
      v14 = (const char *)&unk_3C4376;
      v15 = 72565LL;
      break;
    case -82:
      v14 = aSvgXmlnsHttpWw_144;
      v15 = 4197LL;
      break;
    case -81:
      v14 = aSvgXmlnsHttpWw_145;
      v15 = 1630LL;
      break;
    case -80:
      v14 = aSvgXmlnsHttpWw_146;
      v15 = 1487LL;
      break;
    case -79:
      v14 = aSvgXmlnsHttpWw_147;
      v15 = 671LL;
      break;
    case -78:
      v14 = aSvgXmlnsHttpWw_148;
      v15 = 201LL;
      break;
    case -76:
      v14 = aSvgXmlnsHttpWw_149;
      v15 = 13848LL;
      break;
    case -75:
      v14 = aSvgXmlnsHttpWw_150;
      v15 = 577LL;
      break;
    case -74:
      v14 = aSvgXmlnsHttpWw_151;
      v15 = 483LL;
      break;
    case -73:
      v14 = aSvgXmlnsHttpWw_152;
      v15 = 8038LL;
      break;
    case -72:
      v14 = aSvgXmlnsHttpWw_153;
      v15 = 420LL;
      break;
    case -71:
      v14 = (const char *)&unk_3DDA2B;
      v15 = 16486LL;
      break;
    case -70:
      v14 = aSvgXmlnsHttpWw_154;
      v15 = 348LL;
      break;
    case -68:
      v14 = aSvgXmlnsHttpWw_155;
      v15 = 279LL;
      break;
    case -67:
      v14 = (const char *)&unk_3E1D04;
      v15 = 185027LL;
      break;
    case -66:
      v14 = aSvgXmlnsHttpWw_156;
      v15 = 260LL;
      break;
    case -65:
      v14 = aSvgXmlnsHttpWw_157;
      v15 = 693LL;
      break;
    case -64:
      v14 = (const char *)&unk_40F380;
      v15 = 10170LL;
      break;
    case -63:
      v14 = aSvgXmlnsHttpWw_158;
      v15 = 893LL;
      break;
    case -62:
      v14 = aSvgXmlnsHttpWw_159;
      v15 = 300LL;
      break;
    case -61:
      v14 = aSvgXmlnsHttpWw_160;
      v15 = 437LL;
      break;
    case -60:
      v14 = aSvgXmlnsHttpWw_161;
      v15 = 205LL;
      break;
    case -59:
      v14 = aSvgXmlnsHttpWw_162;
      v15 = 832LL;
      break;
    case -58:
      v14 = (const char *)&unk_4125A5;
      v15 = 30662LL;
      break;
    case -57:
      v14 = aSvgXmlnsHttpWw_163;
      v15 = 1975LL;
      break;
    case -55:
      v14 = aSvgXmlnsHttpWw_165;
      v15 = 1177LL;
      break;
    case -54:
      v14 = aSvgXmlnsHttpWw_166;
      v15 = 249LL;
      break;
    case -53:
      v14 = aSvgXmlnsHttpWw_167;
      v15 = 15641LL;
      break;
    case -52:
      v14 = aSvgXmlnsHttpWw_168;
      v15 = 395LL;
      break;
    case -51:
      v14 = aSvgXmlnsHttpWw_169;
      v15 = 447LL;
      break;
    case -50:
      v14 = aSvgXmlnsHttpWw_170;
      v15 = 298LL;
      break;
    case -49:
      v14 = aSvgXmlnsHttpWw_171;
      v15 = 363LL;
      break;
    case -48:
      v14 = aSvgXmlnsHttpWw_172;
      v15 = 849LL;
      break;
    case -47:
      v14 = (const char *)&unk_41F22A;
      v15 = 79036LL;
      break;
    case -46:
      v14 = aSvgXmlnsHttpWw_173;
      v15 = 13007LL;
      break;
    case -45:
      v14 = aSvgXmlnsHttpWw_174;
      v15 = 292LL;
      break;
    case -44:
      v14 = aSvgXmlnsHttpWw_175;
      v15 = 4631LL;
      break;
    case -43:
      v14 = aSvgXmlnsHttpWw_176;
      v15 = 6759LL;
      break;
    case -42:
      v14 = aSvgXmlnsHttpWw_177;
      v15 = 241LL;
      break;
    case -41:
      v14 = aSvgXmlnsHttpWw_178;
      v15 = 1042LL;
      break;
    case -40:
      v14 = aSvgXmlnsHttpWw_179;
      v15 = 663LL;
      break;
    case -39:
      v14 = aSvgXmlnsHttpWw_180;
      v15 = 261LL;
      break;
    case -38:
      v14 = aSvgXmlnsHttpWw_181;
      v15 = 1754LL;
      break;
    case -37:
      v14 = aSvgXmlnsHttpWw_182;
      v15 = 771LL;
      break;
    case -36:
      v14 = aSvgXmlnsHttpWw_183;
      v15 = 543LL;
      break;
    case -35:
      v14 = (const char *)&unk_439BF2;
      v15 = 31015LL;
      break;
    case -34:
      v14 = aSvgXmlnsHttpWw_184;
      v15 = 325LL;
      break;
    case -33:
      v14 = aSvgXmlnsHttpWw_185;
      v15 = 310LL;
      break;
    case -32:
      v14 = aSvgXmlnsHttpWw_186;
      v15 = 522LL;
      break;
    case -31:
      v14 = aSvgXmlnsHttpWw_187;
      v15 = 301LL;
      break;
    case -30:
      v14 = aSvgXmlnsHttpWw_188;
      v15 = 1404LL;
      break;
    case -29:
      v14 = aSvgXmlnsHttpWw_189;
      v15 = 2297LL;
      break;
    case -28:
      v14 = aSvgXmlnsHttpWw_190;
      v15 = 489LL;
      break;
    case -27:
      v14 = aSvgXmlnsHttpWw_191;
      v15 = 214LL;
      break;
    case -26:
      v14 = aSvgXmlnsHttpWw_192;
      v15 = 3811LL;
      break;
    case -25:
    case -24:
      v14 = (const char *)&unk_443AE2;
      v15 = 208536LL;
      break;
    case -23:
      v14 = aSvgXmlnsHttpWw_193;
      v15 = 1553LL;
      break;
    case -22:
      v14 = aSvgXmlnsHttpWw_194;
      v15 = 1266LL;
      break;
    case -21:
      v14 = (const char *)&unk_47747D;
      v15 = 87755LL;
      break;
    case -20:
      v14 = aSvgXmlnsHttpWw_195;
      v15 = 417LL;
      break;
    case -19:
      v14 = aSvgXmlnsHttpWw_196;
      v15 = 1022LL;
      break;
    case -18:
      v14 = aSvgXmlnsHttpWw_197;
      v15 = 10376LL;
      break;
    case -17:
      v14 = (const char *)&unk_48F96F;
      v15 = 8646LL;
      break;
    case -16:
      v14 = aSvgXmlnsHttpWw_198;
      v15 = 444LL;
      break;
    case -15:
      v14 = aSvgXmlnsHttpWw_199;
      v15 = 2037LL;
      break;
    case -13:
      v14 = aSvgXmlnsHttpWw_200;
      v15 = 664LL;
      break;
    case -12:
      v14 = aSvgXmlnsHttpWw_201;
      v15 = 249LL;
      break;
    case -10:
      v14 = aSvgXmlnsHttpWw_203;
      v15 = 780LL;
      break;
    case -9:
      v14 = aSvgXmlnsHttpWw_204;
      v15 = 5354LL;
      break;
    case -8:
      v14 = aSvgXmlnsHttpWw_205;
      v15 = 6686LL;
      break;
    case -7:
      if ( a4 )
      {
        v18 = sniffnet::translations::translations_2::your_network_adapter_translation(a9);
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v30, v18, v19);
        v29 = *(_QWORD *)&v30[16];
        v28 = *(_OWORD *)v30;
        v20 = aSvgXmlnsHttpWw_210;
        v21 = 891LL;
      }
      else if ( a8 == 1 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v30, aMulticast, 9LL);
        v29 = *(_QWORD *)&v30[16];
        v28 = *(_OWORD *)v30;
        v20 = aSvgXmlnsHttpWw_206;
        v21 = 1563LL;
      }
      else if ( a8 == 2 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v30, aBroadcast, 9LL);
        v29 = *(_QWORD *)&v30[16];
        v28 = *(_OWORD *)v30;
        v20 = aSvgXmlnsHttpWw_207;
        v21 = 1661LL;
      }
      else if ( a3 )
      {
        v22 = sniffnet::translations::translations_2::local_translation(a9);
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v30, v22, v23);
        v29 = *(_QWORD *)&v30[16];
        v28 = *(_OWORD *)v30;
        v20 = aSvgXmlnsHttpWw_209;
        v21 = 817LL;
      }
      else if ( a5 )
      {
        sniffnet::translations::translations_4::reserved_address_translation(v30, a9, a5, a6);
        v29 = *(_QWORD *)&v30[16];
        v28 = *(_OWORD *)v30;
        v20 = aSvgXmlnsHttpWw_208;
        v21 = 988LL;
      }
      else
      {
        v24 = sniffnet::translations::translations_2::unknown_translation(a9);
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v30, v24, v25);
        v29 = *(_QWORD *)&v30[16];
        v28 = *(_OWORD *)v30;
        v20 = (const char *)&unk_496BDB;
        v21 = 1178LL;
      }
      core::ptr::drop_in_place<alloc::string::String>(&v32);
      v33 = v29;
      v32 = v28;
      v13 = 0;
      v14 = v20;
      v15 = v21;
      break;
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v34, v14, v15);
  v31 = v35;
  *(_OWORD *)&v30[8] = v34;
  *(_QWORD *)v30 = 1LL;
  v16 = iced_core::svg::Handle::from_data(v30);
  iced_widget::svg::Svg<Theme>::new(v30, v16);
  iced_widget::svg::Svg<Theme>::class(&v34, v30, v13);
  iced_widget::svg::Svg<Theme>::width(v30, &v34, v27);
  iced_widget::svg::Svg<Theme>::height(a1, v30, v27 * 0.75);
  result = v33;
  *(_QWORD *)(a1 + 64) = v33;
  *(_OWORD *)(a1 + 48) = v32;
  return result;
}