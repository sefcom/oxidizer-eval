__int64 __fastcall forc_debug::server::handlers::handle_variables::rd(_QWORD *a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 v3; // cl
  int v4; // eax
  unsigned int v5; // esi
  __int64 v6; // rsi
  __int16 v8; // [rsp+Ch] [rbp-Ch] BYREF
  char v9; // [rsp+Eh] [rbp-Ah]

  v3 = 0;
  v4 = (unsigned __int8)a2 - 18;
  v5 = a2 >> 8;
  switch ( v4 )
  {
    case 0:
    case 7:
    case 11:
    case 12:
    case 17:
    case 18:
    case 23:
    case 25:
    case 27:
    case 90:
    case 91:
    case 92:
    case 93:
    case 94:
    case 95:
    case 96:
      v8 = v5;
      v6 = HIWORD(v5);
      v9 = v6;
      LOBYTE(v4) = fuel_asm::_op::WQOP::imm06(&v8, v6, a3, 0LL);
      v3 = 1;
      break;
    default:
      return forc_debug::server::handlers::handle_variables::reg_id_to_string(a1, v3, (unsigned __int8)v4);
  }
  return forc_debug::server::handlers::handle_variables::reg_id_to_string(a1, v3, (unsigned __int8)v4);
}