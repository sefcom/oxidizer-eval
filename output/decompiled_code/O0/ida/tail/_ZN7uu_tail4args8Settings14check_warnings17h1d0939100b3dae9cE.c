int __fastcall uu_tail::args::Settings::check_warnings(__int64 a1)
{
  char v2; // al
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // r15
  char ***v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r15
  __pid_t v10; // edi
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r15
  char ***v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r15
  int result; // eax
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // rsi
  __int128 *v22; // rdi
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r14
  __int128 v27; // [rsp+8h] [rbp-2D0h] BYREF
  __int64 v28; // [rsp+18h] [rbp-2C0h]
  __int128 v29; // [rsp+20h] [rbp-2B8h] BYREF
  __int64 v30; // [rsp+30h] [rbp-2A8h]
  _QWORD v31[2]; // [rsp+40h] [rbp-298h] BYREF
  _QWORD v32[2]; // [rsp+50h] [rbp-288h] BYREF
  _QWORD v33[2]; // [rsp+60h] [rbp-278h] BYREF
  _QWORD v34[2]; // [rsp+70h] [rbp-268h] BYREF
  _QWORD v35[2]; // [rsp+80h] [rbp-258h] BYREF
  _QWORD v36[2]; // [rsp+90h] [rbp-248h] BYREF
  _QWORD v37[2]; // [rsp+A0h] [rbp-238h] BYREF
  _QWORD v38[2]; // [rsp+B0h] [rbp-228h] BYREF
  _QWORD v39[2]; // [rsp+C0h] [rbp-218h] BYREF
  _QWORD v40[2]; // [rsp+D0h] [rbp-208h] BYREF
  _QWORD v41[6]; // [rsp+E0h] [rbp-1F8h] BYREF
  _QWORD v42[6]; // [rsp+110h] [rbp-1C8h] BYREF
  _QWORD v43[6]; // [rsp+140h] [rbp-198h] BYREF
  _QWORD v44[6]; // [rsp+170h] [rbp-168h] BYREF
  _QWORD v45[6]; // [rsp+1A0h] [rbp-138h] BYREF
  _QWORD v46[3]; // [rsp+1D0h] [rbp-108h] BYREF
  __int128 v47; // [rsp+1E8h] [rbp-F0h]
  char **v48; // [rsp+200h] [rbp-D8h] BYREF
  char **v49; // [rsp+230h] [rbp-A8h] BYREF
  char **v50; // [rsp+260h] [rbp-78h] BYREF
  char **v51; // [rsp+290h] [rbp-48h] BYREF

  if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
  {
    v2 = *(_BYTE *)(a1 + 76);
    if ( v2 == 2 )
    {
      v3 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v4 = *(_QWORD *)(v3 + 8);
      v5 = *(_QWORD *)(v3 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v4, 1LL, 1LL, v5);
      v32[0] = v4;
      v32[1] = v5;
      v31[0] = v32;
      v31[1] = <&T as core::fmt::Display>::fmt;
      v41[0] = &unk_18A5E0;
      v41[1] = 2LL;
      v41[4] = 0LL;
      v41[2] = v31;
      v41[3] = 1LL;
      std::io::stdio::_eprint(v41);
      v48 = &off_18A610;
      v6 = &v48;
    }
    else
    {
      if ( (v2 & 1) != 0 )
        goto LABEL_7;
      v7 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v8 = *(_QWORD *)(v7 + 8);
      v9 = *(_QWORD *)(v7 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v8, 1LL, 1LL, v9);
      v34[0] = v8;
      v34[1] = v9;
      v33[0] = v34;
      v33[1] = <&T as core::fmt::Display>::fmt;
      v42[0] = &unk_18A5E0;
      v42[1] = 2LL;
      v42[4] = 0LL;
      v42[2] = v33;
      v42[3] = 1LL;
      std::io::stdio::_eprint(v42);
      v49 = &off_18A600;
      v6 = &v49;
    }
    v6[1] = (char **)(&dword_0 + 1);
    v6[2] = (char **)&byte_8;
    *(_OWORD *)(v6 + 3) = 0LL;
    std::io::stdio::_eprint(v6);
  }
LABEL_7:
  v10 = *(_DWORD *)(a1 + 68);
  if ( !v10 )
    goto LABEL_13;
  if ( *(_BYTE *)(a1 + 76) == 2 )
  {
    v11 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v12 = *(_QWORD *)(v11 + 8);
    v13 = *(_QWORD *)(v11 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v12, 1LL, 1LL, v13);
    v36[0] = v12;
    v36[1] = v13;
    v35[0] = v36;
    v35[1] = <&T as core::fmt::Display>::fmt;
    v43[0] = &unk_18A5E0;
    v43[1] = 2LL;
    v43[4] = 0LL;
    v43[2] = v35;
    v43[3] = 1LL;
    std::io::stdio::_eprint(v43);
    v50 = &off_18A630;
    v14 = &v50;
  }
  else
  {
    if ( uu_tail::platform::unix::supports_pid_checks(v10) )
      goto LABEL_13;
    v15 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v16 = *(_QWORD *)(v15 + 8);
    v17 = *(_QWORD *)(v15 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v16, 1LL, 1LL, v17);
    v38[0] = v16;
    v38[1] = v17;
    v37[0] = v38;
    v37[1] = <&T as core::fmt::Display>::fmt;
    v44[0] = &unk_18A5E0;
    v44[1] = 2LL;
    v44[4] = 0LL;
    v44[2] = v37;
    v44[3] = 1LL;
    std::io::stdio::_eprint(v44);
    v51 = &off_18A620;
    v14 = &v51;
  }
  v14[1] = (char **)(&dword_0 + 1);
  v14[2] = (char **)&byte_8;
  *(_OWORD *)(v14 + 3) = 0LL;
  std::io::stdio::_eprint(v14);
LABEL_13:
  result = *(unsigned __int8 *)(a1 + 76);
  if ( (_BYTE)result != 2 )
  {
    v19 = *(_QWORD *)(a1 + 32);
    if ( !v19 || (v19 & 7) != 0 || (v20 = *(_QWORD *)(a1 + 40), v20 >= 0x2AAAAAAAAAAAAABLL) )
      core::panicking::panic_nounwind(anon_25ca73c7ec58fbee70b780a6cb8b0c0a_11_llvm_4725413469243929574, 162LL);
    v21 = 48 * v20;
    v22 = (__int128 *)0x8000000000000000LL;
    while ( v21 )
    {
      v21 -= 48LL;
      v23 = *(_QWORD *)(v19 + 24) == 0x8000000000000000LL;
      v19 += 48LL;
      if ( v23 )
      {
        if ( (result & 1) == 0 && !*(_DWORD *)(a1 + 68) && v20 == 1 )
        {
          v21 = 0LL;
          same_file::unix::Handle::from_file(&v29, 0LL, v19);
          if ( BYTE4(v30) == 2 )
          {
            *(_QWORD *)&v27 = v29;
            BYTE4(v28) = 2;
            v22 = &v27;
            core::ptr::drop_in_place<core::result::Result<same_file::Handle,std::io::error::Error>>(&v27);
          }
          else
          {
            LODWORD(v28) = v30;
            *(_WORD *)((char *)&v28 + 5) = *(_WORD *)((char *)&v30 + 5);
            HIBYTE(v28) = HIBYTE(v30);
            v27 = v29;
            BYTE4(v28) = 1;
            v30 = v28;
            v22 = &v29;
            result = uu_tail::args::Settings::check_warnings::{{closure}}(&v29);
            if ( (_BYTE)result )
              return result;
          }
        }
        std::io::stdio::stdin(v22, v21, v19);
        result = isatty(0);
        if ( result )
        {
          v24 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          v25 = *(_QWORD *)(v24 + 8);
          v26 = *(_QWORD *)(v24 + 16);
          core::slice::raw::from_raw_parts::precondition_check(v25, 1LL, 1LL, v26);
          v40[0] = v25;
          v40[1] = v26;
          v39[0] = v40;
          v39[1] = <&T as core::fmt::Display>::fmt;
          v45[0] = &unk_18A5E0;
          v45[1] = 2LL;
          v45[4] = 0LL;
          v45[2] = v39;
          v45[3] = 1LL;
          std::io::stdio::_eprint(v45);
          v46[0] = &off_18A640;
          v46[1] = 1LL;
          v46[2] = 8LL;
          v47 = 0LL;
          return std::io::stdio::_eprint(v46);
        }
        return result;
      }
    }
  }
  return result;
}
