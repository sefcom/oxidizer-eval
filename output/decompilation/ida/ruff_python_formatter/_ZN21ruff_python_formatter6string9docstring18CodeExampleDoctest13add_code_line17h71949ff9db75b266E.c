__int64 __fastcall ruff_python_formatter::string::docstring::CodeExampleDoctest::add_code_line(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        __int64 a4)
{
  __int128 v6; // kr00_16
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int128 v11; // xmm0
  __int64 result; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  char **v15; // rdx
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  _BYTE v18[40]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v19; // [rsp+28h] [rbp-60h]
  __int64 v20; // [rsp+30h] [rbp-58h]

  core::str::<impl str>::split_once(v18, *(_QWORD *)a3, *((_QWORD *)a3 + 1));
  if ( *(_QWORD *)v18 )
  {
    v6 = *(_OWORD *)&v18[16];
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *((_QWORD *)a2 + 3),
                            *((_QWORD *)a2 + 4),
                            *(_QWORD *)v18,
                            *(_QWORD *)&v18[8]) )
    {
      *(_DWORD *)v18 = 0;
      v7 = core::char::methods::encode_utf8_raw(32LL, v18);
      v9 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v7, v8, v6, *((_QWORD *)&v6 + 1));
      if ( v9 )
      {
LABEL_4:
        *(_QWORD *)&v18[32] = *((_QWORD *)a3 + 4);
        v11 = *a3;
        *(_OWORD *)&v18[16] = a3[1];
        *(_OWORD *)v18 = v11;
        v19 = v9;
        v20 = v10;
        ((void (__fastcall *)(__int128 *, _BYTE *, char **))alloc::vec::Vec<T,A>::push)(a2, v18, &off_57F288);
        *(_QWORD *)v18 = 0x8000000000000004LL;
        alloc::collections::vec_deque::VecDeque<T,A>::push_back(a4, v18, &off_57F2A0);
        result = *((_QWORD *)a2 + 4);
        *(_QWORD *)(a1 + 32) = result;
        v13 = *a2;
        *(_OWORD *)(a1 + 16) = a2[1];
        *(_OWORD *)a1 = v13;
        return result;
      }
      if ( !*((_QWORD *)&v6 + 1) )
      {
        v9 = 1LL;
        v10 = 0LL;
        goto LABEL_4;
      }
      v19 = *((_QWORD *)a2 + 4);
      v17 = *a2;
      *(_OWORD *)&v18[24] = a2[1];
      *(_OWORD *)&v18[8] = v17;
      *(_QWORD *)v18 = 0x8000000000000000LL;
      v15 = &off_57F270;
    }
    else
    {
      v19 = *((_QWORD *)a2 + 4);
      v16 = *a2;
      *(_OWORD *)&v18[24] = a2[1];
      *(_OWORD *)&v18[8] = v16;
      *(_QWORD *)v18 = 0x8000000000000000LL;
      v15 = &off_57F2B8;
    }
  }
  else
  {
    v19 = *((_QWORD *)a2 + 4);
    v14 = *a2;
    *(_OWORD *)&v18[24] = a2[1];
    *(_OWORD *)&v18[8] = v14;
    *(_QWORD *)v18 = 0x8000000000000000LL;
    v15 = &off_57F2D0;
  }
  result = alloc::collections::vec_deque::VecDeque<T,A>::push_back(a4, v18, v15);
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return result;
}