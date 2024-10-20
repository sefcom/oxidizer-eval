__int64 __fastcall uu_cat::write_end(__int64 a1, __int64 a2, __int64 a3, char a4, char a5)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  const char *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rbp
  int v11; // r15d
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rcx
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // r15
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD v24[7]; // [rsp+0h] [rbp-38h] BYREF

  v24[0] = v5;
  v6 = a3;
  if ( a5 )
  {
    if ( a4 )
    {
      v7 = aI;
      v8 = 2LL;
    }
    else
    {
      v7 = asc_19271;
      v8 = 1LL;
    }
    return uu_cat::write_nonprint_to_end(a2, a3, a1, v7, v8);
  }
  else
  {
    if ( a4 )
    {
      if ( a3 )
      {
        v9 = a2 + a3;
        v10 = 0LL;
        v11 = 9728;
        while ( 1 )
        {
          v12 = a2;
          v13 = 0LL;
          while ( 1 )
          {
            v15 = *(unsigned __int8 *)(a2 + v13);
            if ( v15 <= 0xD )
            {
              if ( _bittest(&v11, v15) )
                break;
            }
            v14 = a2 + v13++ + 1;
            if ( v14 == v9 )
              goto LABEL_26;
          }
          v16 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, a2, v13);
          if ( v16 )
          {
            v24[0] = v16;
            core::result::unwrap_failed(aCalledResultUn_2, 43LL, v24, &off_E4CE8, &off_E4F08);
          }
          if ( *(_BYTE *)(a2 + v13) != 9 )
            return v13 + v10;
          v17 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, aI, 2LL);
          if ( v17 )
          {
            v24[0] = v17;
            core::result::unwrap_failed(aCalledResultUn_2, 43LL, v24, &off_E4CE8, &off_E4F20);
          }
          v9 = a2 + v6;
          a2 += v13 + 1;
          v10 += v13 + 1;
          v6 = v6 - 1 - v13;
          if ( !v6 )
          {
            a2 = v12 + v13 + 1;
            goto LABEL_16;
          }
        }
      }
      else
      {
LABEL_16:
        v6 = 0LL;
LABEL_26:
        v22 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, a2, v6);
        if ( v22 )
        {
          v24[0] = v22;
          core::result::unwrap_failed(aCalledResultUn_2, 43LL, v24, &off_E4CE8, &off_E4EF0);
        }
      }
    }
    else if ( a3 )
    {
      v19 = 0LL;
      while ( 1 )
      {
        v20 = *(unsigned __int8 *)(a2 + v19);
        if ( v20 == 10 || v20 == 13 )
          break;
        if ( a3 == ++v19 )
          goto LABEL_24;
      }
      v23 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, a2, v19);
      v6 = v19;
      if ( v23 )
      {
        v24[0] = v23;
        core::result::unwrap_failed(aCalledResultUn_2, 43LL, v24, &off_E4CE8, &off_E4ED8);
      }
    }
    else
    {
LABEL_24:
      v21 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, a2, a3);
      if ( v21 )
      {
        v24[0] = v21;
        core::result::unwrap_failed(aCalledResultUn_2, 43LL, v24, &off_E4CE8, &off_E4EC0);
      }
    }
    return v6;
  }
}
