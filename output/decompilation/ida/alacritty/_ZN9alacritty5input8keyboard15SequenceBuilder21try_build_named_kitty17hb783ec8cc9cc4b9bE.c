void *__fastcall alacritty::input::keyboard::SequenceBuilder::try_build_named_kitty(
        __int64 a1,
        char a2,
        __int16 a3,
        unsigned __int16 a4)
{
  int v4; // edx
  void *result; // rax
  __int64 v6; // rcx
  char *v7; // rdx

  if ( a3 || (a2 & 1) == 0 )
  {
LABEL_5:
    result = (void *)0x8000000000000001LL;
    *(_QWORD *)a1 = 0x8000000000000001LL;
  }
  else
  {
    v4 = a4 - 7;
    result = &unk_110000;
    v6 = 5LL;
    switch ( v4 )
    {
      case 0:
        v7 = &a57414574205741[135];
        break;
      case 34:
        v7 = &a57414574205741[140];
        break;
      case 39:
        v7 = &a57414574205741[145];
        break;
      case 51:
        v7 = &a57414574205741[150];
        break;
      case 95:
        v7 = &a57414574205741[155];
        break;
      case 96:
        v7 = &a57414574205741[160];
        break;
      case 97:
        v7 = &a57414574205741[165];
        break;
      case 98:
        v7 = &a57414574205741[170];
        break;
      case 99:
        v7 = &a57414574205741[175];
        break;
      case 100:
        v7 = &a57414574205741[180];
        break;
      case 101:
        v7 = &a57414574205741[185];
        break;
      case 102:
        v7 = &a57414574205741[190];
        break;
      case 103:
        v7 = &a57414574205741[195];
        break;
      case 121:
        v7 = &a57414574205741[200];
        break;
      case 122:
        v7 = &a57414574205741[205];
        break;
      case 123:
        v7 = &a57414574205741[210];
        break;
      case 266:
        result = &dword_7C + 2;
        v6 = 2LL;
        v7 = a13;
        break;
      case 276:
        v7 = (char *)&unk_103471;
        break;
      case 277:
        v7 = (char *)&unk_103476;
        break;
      case 278:
        v7 = (char *)&unk_10347B;
        break;
      case 279:
        v7 = (char *)&unk_103480;
        break;
      case 280:
        v7 = (char *)&unk_103485;
        break;
      case 281:
        v7 = (char *)&unk_10348A;
        break;
      case 282:
        v7 = (char *)&unk_10348F;
        break;
      case 283:
        v7 = (char *)&unk_103494;
        break;
      case 284:
        v7 = (char *)&unk_103499;
        break;
      case 285:
        v7 = (char *)&unk_10349E;
        break;
      case 286:
        v7 = (char *)&unk_1034A3;
        break;
      case 287:
        v7 = (char *)&unk_1034A8;
        break;
      case 288:
        v7 = (char *)&unk_1034AD;
        break;
      case 289:
        v7 = (char *)&unk_1034B2;
        break;
      case 290:
        v7 = (char *)&unk_1034B7;
        break;
      case 291:
        v7 = (char *)&unk_1034BC;
        break;
      case 292:
        v7 = (char *)&unk_1034C1;
        break;
      case 293:
        v7 = (char *)&unk_1034C6;
        break;
      case 294:
        v7 = (char *)&unk_1034CB;
        break;
      case 295:
        v7 = (char *)&unk_1034D0;
        break;
      case 296:
        v7 = (char *)&unk_1034D5;
        break;
      case 297:
        v7 = (char *)&unk_1034DA;
        break;
      case 298:
        v7 = (char *)&unk_1034DF;
        break;
      default:
        goto LABEL_5;
    }
    *(_QWORD *)a1 = 0x8000000000000000LL;
    *(_QWORD *)(a1 + 8) = v7;
    *(_QWORD *)(a1 + 16) = v6;
    *(_DWORD *)(a1 + 24) = (_DWORD)result;
  }
  return result;
}