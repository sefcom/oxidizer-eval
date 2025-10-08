__int64 __fastcall forc_debug::server::handlers::handle_variables::imm(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  unsigned int v5; // esi
  __int16 v6; // ax
  __int64 v7; // rdx
  __int64 result; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rsi
  char v12; // al
  __int64 v13; // rdx
  __int16 v14; // [rsp+Ch] [rbp-Ch] BYREF
  char v15; // [rsp+Eh] [rbp-Ah]

  v4 = (unsigned __int8)a2 - 58;
  v5 = a2 >> 8;
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
    case 28:
    case 29:
      v14 = v5;
      v15 = BYTE2(v5);
      v6 = fuel_asm::_op::XORI::imm12(&v14);
      result = forc_debug::server::handlers::handle_variables::imm12_to_string((__int64)a1, v6, v7);
      break;
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
      v14 = v5;
      v15 = BYTE2(v5);
      v9 = fuel_asm::_op::MOVI::imm18(&v14);
      goto LABEL_6;
    case 30:
    case 31:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
      v14 = v5;
      v11 = HIWORD(v5);
      v15 = v11;
      v12 = fuel_asm::_op::WQOP::imm06(&v14, v11, a3, a4);
      result = forc_debug::server::handlers::handle_variables::imm06_to_string((__int64)a1, v12, v13);
      break;
    case 32:
    case 33:
    case 34:
    case 37:
    case 38:
    case 39:
    case 40:
      v14 = v5;
      v15 = BYTE2(v5);
      v9 = fuel_asm::_op::PSHL::imm24(&v14);
LABEL_6:
      result = forc_debug::server::handlers::handle_variables::imm18_to_string((__int64)a1, v9, v10);
      break;
    default:
      result = 0x8000000000000000LL;
      *a1 = 0x8000000000000000LL;
      break;
  }
  return result;
}