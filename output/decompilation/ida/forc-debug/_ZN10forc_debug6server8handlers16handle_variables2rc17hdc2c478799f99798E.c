__int64 __fastcall forc_debug::server::handlers::handle_variables::rc(_QWORD *a1, unsigned int a2, __int64 a3)
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
    case 11:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 24:
    case 25:
    case 29:
    case 30:
    case 34:
    case 35:
    case 36:
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
    case 54:
    case 56:
    case 57:
    case 88:
    case 89:
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
      v5 = fuel_asm::_op::WQOP::rc(&v9, v7, a3, 0LL);
      v3 = 1;
      break;
    default:
      return forc_debug::server::handlers::handle_variables::reg_id_to_string(a1, v3, v5);
  }
  return forc_debug::server::handlers::handle_variables::reg_id_to_string(a1, v3, v5);
}