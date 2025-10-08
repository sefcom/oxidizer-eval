__int64 __fastcall ruff_python_formatter::string::docstring::Indentation::from_str(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // r14
  int v7; // ecx
  __int64 v8; // r12
  __int64 v9; // r13
  unsigned __int64 v10; // r14
  unsigned int v11; // r12d
  unsigned int v12; // edx
  __int128 v13; // [rsp+8h] [rbp-60h] BYREF
  __int64 v14; // [rsp+18h] [rbp-50h] BYREF
  __int128 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-38h]

  *(_QWORD *)&v13 = a2;
  *((_QWORD *)&v13 + 1) = a2 + a3;
  LODWORD(v14) = (_DWORD)&unk_110001;
  v3 = core::iter::traits::iterator::Iterator::fold(&v13);
  result = core::iter::traits::iterator::Iterator::fold(&v13);
  v5 = 8LL;
  if ( result )
  {
    v6 = result;
    result = core::iter::traits::iterator::Iterator::fold(&v13);
    if ( v3 )
    {
      if ( !result )
      {
        v7 = 3;
LABEL_26:
        *(_QWORD *)(a1 + 8) = v3;
        v5 = 16LL;
        goto LABEL_27;
      }
    }
    else
    {
      if ( !result )
      {
        v7 = 1;
LABEL_27:
        *(_QWORD *)(a1 + v5) = v6;
        goto LABEL_28;
      }
      v8 = result;
      core::option::Option<T>::get_or_insert_with(&v14, &v13);
      result = v8;
      if ( (_DWORD)v14 != 9 )
      {
        v7 = 2;
        v3 = v6;
        v6 = v8;
        goto LABEL_26;
      }
    }
    v9 = result + v3 + 8 * v6;
    v10 = result + v3 + v6;
    core::result::Result<T,E>::unwrap(HIDWORD(v10) != 0, &off_57F548);
    result = v14;
    v16 = v14;
    v15 = v13;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v11 = v16;
          LODWORD(v16) = (_DWORD)&unk_110001;
          if ( v11 == (_DWORD)&unk_110001 )
          {
            result = core::str::validations::next_code_point(&v15);
            if ( (result & 1) == 0 )
              goto LABEL_23;
            v11 = v12;
          }
          if ( v11 != 9 )
            break;
          v9 = (v9 & 0xFFFFFFFFFFFFFFF8LL) + 8;
          LODWORD(v10) = v10 + 1;
        }
        if ( v11 != 32 )
        {
          if ( v11 == (_DWORD)&unk_110000 )
            goto LABEL_23;
          result = v11 - 9;
          if ( (unsigned int)result >= 5 )
            break;
        }
        ++v9;
        LODWORD(v10) = v10 + 1;
      }
      if ( v11 < 0x80 )
        break;
      result = core::unicode::unicode_data::white_space::lookup(v11);
      if ( !(_BYTE)result )
        break;
      if ( v11 >= 0x800 )
      {
        result = v11 < 0x10000;
        v9 = v9 - result + 4;
        LODWORD(v10) = 4 - result + v10;
      }
      else
      {
        v9 += 2LL;
        result = 2LL;
        LODWORD(v10) = v10 + 2;
      }
    }
LABEL_23:
    *(_QWORD *)(a1 + 8) = v9;
    *(_DWORD *)(a1 + 4) = v10;
    v7 = 4;
  }
  else
  {
    v7 = 0;
    *(_QWORD *)(a1 + 8) = v3;
  }
LABEL_28:
  *(_DWORD *)a1 = v7;
  return result;
}