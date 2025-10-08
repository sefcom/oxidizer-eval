__int64 __fastcall just::lexer::Lexer::lex_normal(_OWORD *a1, _QWORD *a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  const char *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  _OWORD v18[4]; // [rsp+8h] [rbp-80h] BYREF
  __int128 v19; // [rsp+48h] [rbp-40h]

  switch ( a3 )
  {
    case 9u:
    case 0x20u:
      return just::lexer::Lexer::lex_whitespace();
    case 0xAu:
    case 0xDu:
      return just::lexer::Lexer::lex_eol();
    case 0xBu:
    case 0xCu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
    case 0x13u:
    case 0x14u:
    case 0x15u:
    case 0x16u:
    case 0x17u:
    case 0x18u:
    case 0x19u:
    case 0x1Au:
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Du:
    case 0x1Eu:
    case 0x1Fu:
    case 0x25u:
    case 0x2Du:
    case 0x2Eu:
    case 0x30u:
    case 0x31u:
    case 0x32u:
    case 0x33u:
    case 0x34u:
    case 0x35u:
    case 0x36u:
    case 0x37u:
    case 0x38u:
    case 0x39u:
    case 0x3Bu:
    case 0x3Cu:
    case 0x3Eu:
    case 0x41u:
    case 0x42u:
    case 0x43u:
    case 0x44u:
    case 0x45u:
    case 0x46u:
    case 0x47u:
    case 0x48u:
    case 0x49u:
    case 0x4Au:
    case 0x4Bu:
    case 0x4Cu:
    case 0x4Du:
    case 0x4Eu:
    case 0x4Fu:
    case 0x50u:
    case 0x51u:
    case 0x52u:
    case 0x53u:
    case 0x54u:
    case 0x55u:
    case 0x56u:
    case 0x57u:
    case 0x58u:
    case 0x59u:
    case 0x5Au:
    case 0x5Eu:
    case 0x5Fu:
    case 0x61u:
    case 0x62u:
    case 0x63u:
    case 0x64u:
    case 0x65u:
    case 0x66u:
    case 0x67u:
    case 0x68u:
    case 0x69u:
    case 0x6Au:
    case 0x6Bu:
    case 0x6Cu:
    case 0x6Du:
    case 0x6Eu:
    case 0x6Fu:
    case 0x70u:
    case 0x71u:
    case 0x72u:
    case 0x73u:
    case 0x74u:
    case 0x75u:
    case 0x76u:
    case 0x77u:
    case 0x78u:
    case 0x79u:
    case 0x7Au:
      goto LABEL_7;
    case 0x21u:
      v13 = just::lexer::Lexer::rest(a2);
      if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v13, v14, "!includeS", 8LL) )
      {
        *(_QWORD *)&v18[0] = 0x8000000000000026LL;
        goto LABEL_37;
      }
      v10 = "=";
      v11 = 33LL;
      v12 = 37LL;
LABEL_39:
      result = just::lexer::Lexer::lex_choices(a1, a2, v11, v10, v12);
      break;
    case 0x22u:
    case 0x27u:
    case 0x60u:
      return just::lexer::Lexer::lex_string();
    case 0x23u:
      return just::lexer::Lexer::lex_comment();
    case 0x24u:
      v5 = 18LL;
      goto LABEL_28;
    case 0x26u:
      v6 = 38LL;
      v7 = 38LL;
      v8 = 0LL;
      return just::lexer::Lexer::lex_digraph(a1, a2, v6, v7, v8);
    case 0x28u:
      v9 = 28LL;
      return just::lexer::Lexer::lex_delimiter(a1, a2, v9);
    case 0x29u:
      v9 = 29LL;
      return just::lexer::Lexer::lex_delimiter(a1, a2, v9);
    case 0x2Au:
      v5 = 1LL;
      goto LABEL_28;
    case 0x2Bu:
      v5 = 30LL;
      goto LABEL_28;
    case 0x2Cu:
      v5 = 15LL;
      goto LABEL_28;
    case 0x2Fu:
      v5 = 32LL;
      goto LABEL_28;
    case 0x3Au:
      return just::lexer::Lexer::lex_colon();
    case 0x3Du:
      v10 = (const char *)&unk_65D30;
      v11 = 61LL;
      v12 = 21LL;
      goto LABEL_39;
    case 0x3Fu:
      v5 = 31LL;
      goto LABEL_28;
    case 0x40u:
      v5 = 2LL;
      goto LABEL_28;
    case 0x5Bu:
      v9 = 9LL;
      return just::lexer::Lexer::lex_delimiter(a1, a2, v9);
    case 0x5Cu:
      return just::lexer::Lexer::lex_escape();
    case 0x5Du:
      v9 = 10LL;
      return just::lexer::Lexer::lex_delimiter(a1, a2, v9);
    case 0x7Bu:
      v9 = 7LL;
      return just::lexer::Lexer::lex_delimiter(a1, a2, v9);
    case 0x7Cu:
      v6 = 124LL;
      v7 = 124LL;
      v8 = 6LL;
      return just::lexer::Lexer::lex_digraph(a1, a2, v6, v7, v8);
    case 0x7Du:
      v9 = 8LL;
      return just::lexer::Lexer::lex_delimiter(a1, a2, v9);
    default:
      if ( a3 == 65279 )
      {
        v5 = 11LL;
LABEL_28:
        result = just::lexer::Lexer::lex_single(a1, a2, v5);
      }
      else
      {
LABEL_7:
        if ( a3 - 97 < 0x1A || a3 >= 0x41 && (a3 < 0x5B || a3 == 95) )
        {
          result = just::lexer::Lexer::lex_identifier();
        }
        else
        {
          result = just::lexer::Lexer::advance((__int64)v18, (__int64)a2);
          if ( BYTE8(v19) == 37 )
          {
            DWORD2(v18[0]) = a3;
            *(_QWORD *)&v18[0] = 0x8000000000000044LL;
LABEL_37:
            result = just::lexer::Lexer::error((__int64)a1, (__int64)a2, v18);
          }
          else
          {
            a1[4] = v19;
            v15 = v18[0];
            v16 = v18[1];
            v17 = v18[2];
            a1[3] = v18[3];
            a1[2] = v17;
            a1[1] = v16;
            *a1 = v15;
          }
        }
      }
      break;
  }
  return result;
}