__int64 __fastcall check_docs::extract_starts_and_ends(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int128 v9; // [rsp+0h] [rbp-B8h]
  __int128 v10; // [rsp+0h] [rbp-B8h]
  _BYTE v11[24]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v12; // [rsp+38h] [rbp-80h]
  __int128 v13; // [rsp+48h] [rbp-70h] BYREF
  __int64 v14; // [rsp+58h] [rbp-60h]
  __int128 v15; // [rsp+60h] [rbp-58h] BYREF
  __int64 v16; // [rsp+70h] [rbp-48h]
  __int64 v17; // [rsp+78h] [rbp-40h] BYREF
  __int128 v18; // [rsp+80h] [rbp-38h]
  __int64 v19; // [rsp+90h] [rbp-28h]

  regex::regex::string::Regex::new(v11, aDS2SAnchorSSWS, 64LL);
  v9 = *(_OWORD *)&v11[8];
  if ( *(_QWORD *)v11 )
  {
    v19 = v12;
    v18 = *(_OWORD *)&v11[8];
    v17 = *(_QWORD *)v11;
    check_docs::extract_starts_and_ends::{{closure}}(&v13, a2, a3, &v17);
    v4 = *((_QWORD *)&v13 + 1);
    if ( (_QWORD)v13 != 0x8000000000000000LL )
    {
      v15 = v13;
      v16 = v14;
      regex::regex::string::Regex::new(v11, aDS2SAnchorEndS, 68LL);
      v10 = *(_OWORD *)&v11[8];
      if ( *(_QWORD *)v11 )
      {
        v19 = v12;
        v18 = *(_OWORD *)&v11[8];
        v17 = *(_QWORD *)v11;
        check_docs::extract_starts_and_ends::{{closure}}(&v13, a2, a3, &v17);
        v5 = *((_QWORD *)&v13 + 1);
        v6 = v13;
        if ( (_QWORD)v13 != 0x8000000000000000LL )
        {
          v7 = v14;
          *(_QWORD *)(a1 + 16) = v16;
          *(_OWORD *)a1 = v15;
          *(_QWORD *)(a1 + 24) = v6;
          *(_QWORD *)(a1 + 32) = v5;
          *(_QWORD *)(a1 + 40) = v7;
          return a1;
        }
      }
      else
      {
        *(_QWORD *)&v11[16] = v12;
        *(_OWORD *)v11 = v10;
        v5 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v11);
      }
      *(_QWORD *)(a1 + 8) = v5;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<alloc::vec::Vec<check_docs::Anchor>>(&v15);
      return a1;
    }
  }
  else
  {
    *(_QWORD *)&v11[16] = v12;
    *(_OWORD *)v11 = v9;
    v4 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v11);
  }
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return a1;
}