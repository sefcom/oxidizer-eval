__int64 __fastcall uu_cp::show_debug(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  void *v8; // [rsp+8h] [rbp-90h] BYREF
  __int64 v9; // [rsp+10h] [rbp-88h]
  void *v10; // [rsp+18h] [rbp-80h] BYREF
  __int64 v11; // [rsp+20h] [rbp-78h]
  _QWORD v12[2]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v13[6]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v14[6]; // [rsp+68h] [rbp-30h] BYREF

  switch ( *a1 )
  {
    case 0:
      v8 = &unk_25DAE;
      v9 = 7LL;
      switch ( a1[1] )
      {
        case 0:
          goto LABEL_7;
        case 1:
          goto LABEL_18;
        case 2:
          goto LABEL_9;
        case 3:
          goto LABEL_10;
        case 4:
          goto LABEL_8;
      }
    case 1:
      v8 = &unk_25DB5;
      v9 = 2LL;
      switch ( a1[1] )
      {
        case 0:
          goto LABEL_7;
        case 1:
          goto LABEL_18;
        case 2:
          goto LABEL_9;
        case 3:
          goto LABEL_10;
        case 4:
          goto LABEL_8;
      }
    case 2:
      v8 = &unk_25DB7;
      v9 = 3LL;
      switch ( a1[1] )
      {
        case 0:
          goto LABEL_7;
        case 1:
          goto LABEL_18;
        case 2:
          goto LABEL_9;
        case 3:
          goto LABEL_10;
        case 4:
          goto LABEL_8;
      }
    case 3:
      v8 = &unk_25DBA;
      v9 = 7LL;
      switch ( a1[1] )
      {
        case 0:
          goto LABEL_7;
        case 1:
          goto LABEL_18;
        case 2:
          goto LABEL_9;
        case 3:
          goto LABEL_10;
        case 4:
          goto LABEL_8;
      }
    case 4:
      v8 = &unk_25DC1;
      v9 = 11LL;
      switch ( a1[1] )
      {
        case 0:
LABEL_7:
          v10 = &unk_25DAE;
          v11 = 7LL;
          switch ( a1[2] )
          {
            case 0:
              goto LABEL_11;
            case 1:
              goto LABEL_15;
            case 2:
              goto LABEL_13;
            case 3:
              goto LABEL_14;
            case 4:
              goto LABEL_12;
            case 5:
              goto LABEL_16;
          }
        case 1:
LABEL_18:
          JUMPOUT(0xAC574LL);
        case 2:
LABEL_9:
          v10 = &unk_25DB7;
          v11 = 3LL;
          switch ( a1[2] )
          {
            case 0:
              goto LABEL_11;
            case 1:
              goto LABEL_15;
            case 2:
              goto LABEL_13;
            case 3:
              goto LABEL_14;
            case 4:
              goto LABEL_12;
            case 5:
              goto LABEL_16;
          }
        case 3:
LABEL_10:
          v10 = &unk_25DBA;
          v11 = 7LL;
          switch ( a1[2] )
          {
            case 0:
              goto LABEL_11;
            case 1:
              goto LABEL_15;
            case 2:
              goto LABEL_13;
            case 3:
              goto LABEL_14;
            case 4:
              goto LABEL_12;
            case 5:
              goto LABEL_16;
          }
        case 4:
LABEL_8:
          v10 = &unk_25DC1;
          v11 = 11LL;
          switch ( a1[2] )
          {
            case 0:
LABEL_11:
              v12[0] = &unk_25DAE;
              v6 = 7LL;
              break;
            case 1:
LABEL_15:
              v12[0] = &unk_25DB5;
              v6 = 2LL;
              break;
            case 2:
LABEL_13:
              v12[0] = &unk_25DCC;
              v6 = 5LL;
              break;
            case 3:
LABEL_14:
              v12[0] = &unk_25DD1;
              v6 = 9LL;
              break;
            case 4:
LABEL_12:
              v12[0] = &unk_25DDA;
              v6 = 17LL;
              break;
            case 5:
LABEL_16:
              v12[0] = &unk_25DC1;
              v6 = 11LL;
              break;
          }
          v12[1] = v6;
          v13[0] = &v8;
          v13[1] = <&T as core::fmt::Display>::fmt;
          v13[2] = &v10;
          v13[3] = <&T as core::fmt::Display>::fmt;
          v13[4] = v12;
          v13[5] = <&T as core::fmt::Display>::fmt;
          v14[0] = &off_155210;
          v14[1] = 4LL;
          v14[4] = 0LL;
          v14[2] = v13;
          v14[3] = 3LL;
          return std::io::stdio::_print(v14, a2, a3, v12, a5, a6);
      }
  }
}
