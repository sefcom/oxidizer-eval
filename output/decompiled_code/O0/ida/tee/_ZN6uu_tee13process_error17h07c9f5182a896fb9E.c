unsigned __int64 __fastcall uu_tee::process_error(_BYTE *a1, unsigned __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  char **v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  char v20; // al
  unsigned __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 result; // rax
  char v30; // al
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // [rsp+0h] [rbp-338h] BYREF
  _QWORD v37[2]; // [rsp+8h] [rbp-330h] BYREF
  _QWORD v38[2]; // [rsp+18h] [rbp-320h] BYREF
  _QWORD v39[2]; // [rsp+28h] [rbp-310h] BYREF
  _QWORD v40[2]; // [rsp+38h] [rbp-300h] BYREF
  _QWORD v41[2]; // [rsp+48h] [rbp-2F0h] BYREF
  _QWORD v42[2]; // [rsp+58h] [rbp-2E0h] BYREF
  _QWORD v43[2]; // [rsp+68h] [rbp-2D0h] BYREF
  _QWORD v44[2]; // [rsp+78h] [rbp-2C0h] BYREF
  _BYTE v45[8]; // [rsp+88h] [rbp-2B0h] BYREF
  _BYTE v46[8]; // [rsp+90h] [rbp-2A8h] BYREF
  _QWORD v47[4]; // [rsp+98h] [rbp-2A0h] BYREF
  _QWORD v48[3]; // [rsp+B8h] [rbp-280h] BYREF
  char v49; // [rsp+D0h] [rbp-268h]
  _QWORD v50[4]; // [rsp+D8h] [rbp-260h] BYREF
  _QWORD v51[3]; // [rsp+F8h] [rbp-240h] BYREF
  char v52; // [rsp+110h] [rbp-228h]
  _QWORD v53[4]; // [rsp+118h] [rbp-220h] BYREF
  _QWORD v54[3]; // [rsp+138h] [rbp-200h] BYREF
  char v55; // [rsp+150h] [rbp-1E8h]
  _QWORD v56[4]; // [rsp+158h] [rbp-1E0h] BYREF
  _QWORD v57[3]; // [rsp+178h] [rbp-1C0h] BYREF
  char v58; // [rsp+190h] [rbp-1A8h]
  _QWORD v59[6]; // [rsp+198h] [rbp-1A0h] BYREF
  _QWORD v60[6]; // [rsp+1C8h] [rbp-170h] BYREF
  _QWORD v61[6]; // [rsp+1F8h] [rbp-140h] BYREF
  _QWORD v62[6]; // [rsp+228h] [rbp-110h] BYREF
  _QWORD v63[6]; // [rsp+258h] [rbp-E0h] BYREF
  _QWORD v64[6]; // [rsp+288h] [rbp-B0h] BYREF
  _QWORD v65[6]; // [rsp+2B8h] [rbp-80h] BYREF
  _QWORD v66[10]; // [rsp+2E8h] [rbp-50h] BYREF

  v36 = a2;
  if ( !a1 )
  {
LABEL_7:
    switch ( a2 & 3 )
    {
      case 0uLL:
        v13 = 16LL;
        goto LABEL_19;
      case 1uLL:
        v13 = 15LL;
LABEL_19:
        if ( *(_BYTE *)(a2 + v13) != 11 )
          goto LABEL_20;
        goto LABEL_24;
      case 2uLL:
        v20 = std::sys::pal::unix::decode_error_kind(HIDWORD(a2));
        goto LABEL_16;
      case 3uLL:
        v21 = HIDWORD(a2);
        v22 = (unsigned int)v21;
        v20 = std::io::error::repr_bitpacked::kind_from_prim((unsigned int)v21);
        if ( v20 == 41 )
          goto LABEL_29;
LABEL_16:
        if ( v20 == 11 )
          goto LABEL_24;
LABEL_20:
        v24 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v25 = *(_QWORD *)(v24 + 8);
        v26 = *(_QWORD *)(v24 + 16);
        core::slice::raw::from_raw_parts::precondition_check(v25, 1LL, 1LL, v26);
        v40[0] = v25;
        v40[1] = v26;
        v39[0] = v40;
        v39[1] = <&T as core::fmt::Display>::fmt;
        v61[0] = &anon_16ec7cce188bb8b8bcfaec98f31d399b_54_llvm_946830322825537443;
        v61[1] = 2LL;
        v61[4] = 0LL;
        v61[2] = v39;
        v61[3] = 1LL;
        std::io::stdio::_eprint(v61);
        v27 = *(_QWORD *)(a3 + 8);
        if ( !v27 )
          goto LABEL_37;
        v28 = *(_QWORD *)(a3 + 16);
        if ( v28 < 0 )
          goto LABEL_37;
        v51[0] = 0LL;
        v51[1] = v27;
        v51[2] = v28;
        v52 = 0;
        v50[0] = v51;
        v50[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v50[2] = &v36;
        v50[3] = <std::io::error::Error as core::fmt::Display>::fmt;
        v62[0] = &unk_10B580;
        v62[1] = 3LL;
        v62[4] = 0LL;
        v62[2] = v50;
        v62[3] = 2LL;
        std::io::stdio::_eprint(v62);
        v11 = *a4 + 1;
        if ( *a4 != -1 )
          goto LABEL_23;
        v12 = &off_10B5C8;
        break;
    }
LABEL_39:
    core::panicking::panic_const::panic_const_add_overflow(v12);
  }
  switch ( *a1 )
  {
    case 0:
      v6 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v7 = *(_QWORD *)(v6 + 8);
      v8 = *(_QWORD *)(v6 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v7, 1LL, 1LL, v8);
      v38[0] = v7;
      v38[1] = v8;
      v37[0] = v38;
      v37[1] = <&T as core::fmt::Display>::fmt;
      v59[0] = &anon_16ec7cce188bb8b8bcfaec98f31d399b_54_llvm_946830322825537443;
      v59[1] = 2LL;
      v59[4] = 0LL;
      v59[2] = v37;
      v59[3] = 1LL;
      std::io::stdio::_eprint(v59);
      v9 = *(_QWORD *)(a3 + 8);
      if ( !v9 )
        goto LABEL_37;
      v10 = *(_QWORD *)(a3 + 16);
      if ( v10 < 0 )
        goto LABEL_37;
      v48[0] = 0LL;
      v48[1] = v9;
      v48[2] = v10;
      v49 = 0;
      v47[0] = v48;
      v47[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v47[2] = &v36;
      v47[3] = <std::io::error::Error as core::fmt::Display>::fmt;
      v60[0] = &unk_10B580;
      v60[1] = 3LL;
      v60[4] = 0LL;
      v60[2] = v47;
      v60[3] = 2LL;
      std::io::stdio::_eprint(v60);
      v11 = *a4 + 1;
      if ( *a4 == -1 )
      {
        v12 = &off_10B5B0;
        goto LABEL_39;
      }
LABEL_23:
      *a4 = v11;
LABEL_24:
      std::io::error::repr_bitpacked::decode_repr(v45, v36);
      if ( v45[0] >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v46);
      return 0LL;
    case 1:
      goto LABEL_7;
    case 2:
      v14 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v15 = *(_QWORD *)(v14 + 8);
      v16 = *(_QWORD *)(v14 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v15, 1LL, 1LL, v16);
      v42[0] = v15;
      v42[1] = v16;
      v41[0] = v42;
      v41[1] = <&T as core::fmt::Display>::fmt;
      v63[0] = &anon_16ec7cce188bb8b8bcfaec98f31d399b_54_llvm_946830322825537443;
      v63[1] = 2LL;
      v63[4] = 0LL;
      v63[2] = v41;
      v63[3] = 1LL;
      std::io::stdio::_eprint(v63);
      v17 = *(_QWORD *)(a3 + 8);
      if ( !v17 )
        goto LABEL_37;
      v18 = *(_QWORD *)(a3 + 16);
      if ( v18 < 0 )
        goto LABEL_37;
      v54[0] = 0LL;
      v54[1] = v17;
      v54[2] = v18;
      v55 = 0;
      v53[0] = v54;
      v53[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v53[2] = &v36;
      v53[3] = <std::io::error::Error as core::fmt::Display>::fmt;
      v64[0] = &unk_10B580;
      v64[1] = 3LL;
      v64[4] = 0LL;
      v64[2] = v53;
      v64[3] = 2LL;
      std::io::stdio::_eprint(v64);
      return v36;
    case 3:
      switch ( a2 & 3 )
      {
        case 0uLL:
          v19 = 16LL;
          goto LABEL_31;
        case 1uLL:
          v19 = 15LL;
LABEL_31:
          v30 = *(_BYTE *)(a2 + v19);
          break;
        case 2uLL:
          v30 = std::sys::pal::unix::decode_error_kind(HIDWORD(a2));
          break;
        case 3uLL:
          v21 = HIDWORD(a2);
          v22 = (unsigned int)v21;
          v30 = std::io::error::repr_bitpacked::kind_from_prim((unsigned int)v21);
          if ( v30 == 41 )
LABEL_29:
            core::hint::unreachable_unchecked::precondition_check(v22, v21, v23);
          return result;
      }
      if ( v30 == 11 )
        goto LABEL_24;
      v31 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
      v32 = *(_QWORD *)(v31 + 8);
      v33 = *(_QWORD *)(v31 + 16);
      core::slice::raw::from_raw_parts::precondition_check(v32, 1LL, 1LL, v33);
      v44[0] = v32;
      v44[1] = v33;
      v43[0] = v44;
      v43[1] = <&T as core::fmt::Display>::fmt;
      v65[0] = &anon_16ec7cce188bb8b8bcfaec98f31d399b_54_llvm_946830322825537443;
      v65[1] = 2LL;
      v65[4] = 0LL;
      v65[2] = v43;
      v65[3] = 1LL;
      std::io::stdio::_eprint(v65);
      v34 = *(_QWORD *)(a3 + 8);
      if ( !v34 || (v35 = *(_QWORD *)(a3 + 16), v35 < 0) )
LABEL_37:
        core::panicking::panic_nounwind(anon_dbaf84f4587bab6957c409f76d9d252b_47_llvm_7542419511123013163, 162LL);
      v57[0] = 0LL;
      v57[1] = v34;
      v57[2] = v35;
      v58 = 0;
      v56[0] = v57;
      v56[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v56[2] = &v36;
      v56[3] = <std::io::error::Error as core::fmt::Display>::fmt;
      v66[0] = &unk_10B580;
      v66[1] = 3LL;
      v66[4] = 0LL;
      v66[2] = v56;
      v66[3] = 2LL;
      std::io::stdio::_eprint(v66);
      return v36;
  }
}
