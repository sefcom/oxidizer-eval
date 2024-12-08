__int64 __fastcall uu_env::split_iterator::SplitIterator::state_delimiter_backslash(__int64 a1, __int64 a2)
{
  int current_char; // r15d
  __int64 result; // rax
  __int64 v4; // r14
  __int128 v5; // xmm0
  int v6; // ecx
  __int128 v7; // xmm0
  _BYTE v8[40]; // [rsp+8h] [rbp-40h] BYREF

  current_char = uu_env::split_iterator::SplitIterator::get_current_char(a2);
  result = (unsigned int)(current_char - 34);
  switch ( current_char )
  {
    case '"':
    case '#':
    case '$':
    case '\'':
    case '\\':
      uu_env::split_iterator::SplitIterator::take_one((__int64)v8, a2);
      if ( *(_DWORD *)v8 != 8 )
        goto LABEL_9;
      return uu_env::split_iterator::SplitIterator::state_unquoted(a1, a2);
    case '%':
    case '&':
    case '(':
    case ')':
    case '*':
    case '+':
    case ',':
    case '-':
    case '.':
    case '/':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    case ':':
    case ';':
    case '<':
    case '=':
    case '>':
    case '?':
    case '@':
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
    case '[':
    case ']':
    case '^':
    case '`':
    case 'a':
    case 'b':
      goto LABEL_10;
    case '_':
      goto LABEL_7;
    case 'c':
      *(_DWORD *)a1 = 6;
      return result;
    default:
      if ( current_char == 10 )
      {
LABEL_7:
        result = uu_env::split_iterator::SplitIterator::skip_one((__int64)v8, a2);
        if ( *(_DWORD *)v8 == 8 )
        {
          *(_DWORD *)a1 = 8;
        }
        else
        {
LABEL_9:
          result = *(_QWORD *)&v8[32];
          *(_QWORD *)(a1 + 32) = *(_QWORD *)&v8[32];
          v5 = *(_OWORD *)v8;
          *(_OWORD *)(a1 + 16) = *(_OWORD *)&v8[16];
          *(_OWORD *)a1 = v5;
        }
      }
      else if ( current_char == 1114112 )
      {
        v4 = *(_QWORD *)(a2 + 56);
        result = <T as alloc::slice::hack::ConvertVec>::to_vec(a1 + 16, aDelimiter, 9LL);
        *(_DWORD *)a1 = 1;
        *(_QWORD *)(a1 + 8) = v4;
      }
      else
      {
LABEL_10:
        uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code((__int64)v8, a2, current_char);
        v6 = *(_DWORD *)v8;
        result = v8[4];
        if ( *(_DWORD *)v8 == 8 )
        {
          if ( v8[4] )
          {
            return uu_env::split_iterator::SplitIterator::state_unquoted(a1, a2);
          }
          else
          {
            result = *(_QWORD *)(a2 + 56);
            *(_DWORD *)a1 = 3;
            *(_DWORD *)(a1 + 4) = current_char;
            *(_QWORD *)(a1 + 8) = result;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 36) = *(_DWORD *)&v8[36];
          v7 = *(_OWORD *)&v8[5];
          *(_OWORD *)(a1 + 21) = *(_OWORD *)&v8[21];
          *(_OWORD *)(a1 + 5) = v7;
          *(_DWORD *)a1 = v6;
          *(_BYTE *)(a1 + 4) = result;
        }
      }
      return result;
  }
}
