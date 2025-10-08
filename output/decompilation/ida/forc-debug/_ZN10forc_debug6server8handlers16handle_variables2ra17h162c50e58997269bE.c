__int64 __fastcall forc_debug::server::handlers::handle_variables::ra(_QWORD *a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 v3; // cl
  char v4; // kr00_1
  unsigned __int8 v5; // al
  unsigned int v6; // esi
  __int64 v7; // rsi
  __int16 v9; // [rsp+Ch] [rbp-Ch] BYREF
  char v10; // [rsp+Eh] [rbp-Ah]

  v3 = 0;
  v4 = a2;
  v5 = a2;
  v6 = a2 >> 8;
  switch ( v4 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
    case 80:
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 93:
    case 94:
    case 100:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
      v9 = v6;
      v7 = HIWORD(v6);
      v10 = v7;
      v5 = fuel_asm::_op::XORI::ra(&v9, v7, a3, 0LL);
      v3 = 1;
      break;
    default:
      return forc_debug::server::handlers::handle_variables::reg_id_to_string(a1, v3, v5);
  }
  return forc_debug::server::handlers::handle_variables::reg_id_to_string(a1, v3, v5);
}