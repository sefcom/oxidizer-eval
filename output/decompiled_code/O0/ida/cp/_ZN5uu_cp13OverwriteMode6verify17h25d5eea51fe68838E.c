__int64 __fastcall uu_cp::OverwriteMode::verify(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v7; // rsi
  unsigned int v8; // ebp
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rax
  char yes; // bp
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // [rsp+4h] [rbp-5C4h] BYREF
  __int64 v24; // [rsp+8h] [rbp-5C0h]
  __int64 v25; // [rsp+10h] [rbp-5B8h] BYREF
  __int64 v26; // [rsp+18h] [rbp-5B0h] BYREF
  __int64 v27; // [rsp+20h] [rbp-5A8h] BYREF
  __int64 v28; // [rsp+28h] [rbp-5A0h]
  __int64 v29; // [rsp+30h] [rbp-598h]
  __int64 v30; // [rsp+38h] [rbp-590h] BYREF
  __int64 v31; // [rsp+40h] [rbp-588h]
  __int64 v32; // [rsp+48h] [rbp-580h]
  void *v33; // [rsp+50h] [rbp-578h] BYREF
  void *v34; // [rsp+58h] [rbp-570h] BYREF
  _QWORD v35[2]; // [rsp+60h] [rbp-568h] BYREF
  _QWORD v36[2]; // [rsp+70h] [rbp-558h] BYREF
  _QWORD v37[2]; // [rsp+80h] [rbp-548h] BYREF
  _QWORD v38[2]; // [rsp+90h] [rbp-538h] BYREF
  _QWORD v39[2]; // [rsp+A0h] [rbp-528h] BYREF
  _QWORD v40[2]; // [rsp+B0h] [rbp-518h] BYREF
  _QWORD v41[2]; // [rsp+C0h] [rbp-508h] BYREF
  _QWORD v42[2]; // [rsp+D0h] [rbp-4F8h] BYREF
  _QWORD v43[2]; // [rsp+E0h] [rbp-4E8h] BYREF
  _QWORD v44[2]; // [rsp+F0h] [rbp-4D8h] BYREF
  _QWORD v45[2]; // [rsp+100h] [rbp-4C8h] BYREF
  _QWORD v46[2]; // [rsp+110h] [rbp-4B8h] BYREF
  _QWORD v47[2]; // [rsp+120h] [rbp-4A8h] BYREF
  _QWORD v48[3]; // [rsp+130h] [rbp-498h] BYREF
  _QWORD v49[3]; // [rsp+148h] [rbp-480h] BYREF
  _QWORD v50[3]; // [rsp+160h] [rbp-468h] BYREF
  char v51; // [rsp+178h] [rbp-450h]
  _QWORD v52[3]; // [rsp+180h] [rbp-448h] BYREF
  char v53; // [rsp+198h] [rbp-430h]
  _QWORD v54[3]; // [rsp+1A0h] [rbp-428h] BYREF
  char v55; // [rsp+1B8h] [rbp-410h]
  _QWORD v56[6]; // [rsp+1C0h] [rbp-408h] BYREF
  _QWORD v57[6]; // [rsp+1F0h] [rbp-3D8h] BYREF
  _QWORD v58[6]; // [rsp+220h] [rbp-3A8h] BYREF
  _QWORD v59[6]; // [rsp+250h] [rbp-378h] BYREF
  _QWORD v60[6]; // [rsp+280h] [rbp-348h] BYREF
  _QWORD v61[6]; // [rsp+2B0h] [rbp-318h] BYREF
  _QWORD v62[6]; // [rsp+2E0h] [rbp-2E8h] BYREF
  _QWORD v63[6]; // [rsp+310h] [rbp-2B8h] BYREF
  _QWORD v64[6]; // [rsp+340h] [rbp-288h] BYREF
  _QWORD v65[6]; // [rsp+370h] [rbp-258h] BYREF
  _QWORD v66[6]; // [rsp+3A0h] [rbp-228h] BYREF
  char v67; // [rsp+3D0h] [rbp-1F8h]
  _QWORD v68[3]; // [rsp+3D8h] [rbp-1F0h] BYREF
  __int128 v69; // [rsp+3F0h] [rbp-1D8h]
  _QWORD v70[3]; // [rsp+408h] [rbp-1C0h] BYREF
  __int128 v71; // [rsp+420h] [rbp-1A8h]
  _QWORD src[22]; // [rsp+438h] [rbp-190h] BYREF
  _QWORD dest[22]; // [rsp+4E8h] [rbp-E0h] BYREF

  if ( !*a2 )
  {
LABEL_16:
    *(_QWORD *)a1 = 13LL;
    return a1;
  }
  if ( *a2 == 1 )
  {
    std::sys::pal::unix::fs::stat(src);
    if ( src[0] == 2LL )
    {
      v7 = src[1];
    }
    else
    {
      memcpy(dest, src, sizeof(dest));
      if ( dest[0] != 2LL )
      {
        v8 = dest[7];
        if ( SLOBYTE(dest[7]) >= 0 )
        {
          v23 = dest[7] & 0xF7F;
          v47[0] = &v23;
          v47[1] = core::fmt::num::<impl core::fmt::Octal for u32>::fmt;
          v66[0] = 2LL;
          v66[2] = 0LL;
          v66[3] = 4LL;
          v66[4] = 0LL;
          v66[5] = 0x800000020LL;
          v67 = 3;
          src[0] = anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
          src[1] = 1LL;
          src[2] = v47;
          src[3] = 1LL;
          src[4] = v66;
          src[5] = 1LL;
          alloc::fmt::format::format_inner(v48, src);
          v9 = v48[0];
          v24 = v48[1];
          v10 = v48[2];
          uucore::features::fs::display_permissions_unix(v49, v8, 0LL);
          if ( v9 != 0x8000000000000000LL )
          {
            v27 = v9;
            v28 = v24;
            v29 = v10;
            v30 = v49[0];
            v31 = v49[1];
            v32 = v49[2];
            v15 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
            v16 = *(_QWORD *)(v15 + 8);
            v17 = *(_QWORD *)(v15 + 16);
            core::slice::raw::from_raw_parts::precondition_check(v16, 1LL, 1LL, v17);
            v37[0] = v16;
            v37[1] = v17;
            v36[0] = v37;
            v36[1] = <&T as core::fmt::Display>::fmt;
            v58[0] = &unk_1820C0;
            v58[1] = 2LL;
            v58[4] = 0LL;
            v58[2] = v36;
            v58[3] = 1LL;
            std::io::stdio::_eprint(v58);
            v52[0] = 1LL;
            v52[1] = a3;
            v52[2] = a4;
            v53 = 1;
            v56[0] = v52;
            v56[1] = <os_display::Quoted as core::fmt::Display>::fmt;
            v56[2] = &v27;
            v56[3] = <alloc::string::String as core::fmt::Display>::fmt;
            v56[4] = &v30;
            v56[5] = <alloc::string::String as core::fmt::Display>::fmt;
            v59[0] = &off_1821A8;
            v59[1] = 4LL;
            v59[4] = 0LL;
            v59[2] = v56;
            v59[3] = 3LL;
            std::io::stdio::_eprint(v59);
            v68[0] = &off_1821E8;
            v68[1] = 1LL;
            v68[2] = 8LL;
            v69 = 0LL;
            std::io::stdio::_eprint(v68);
            v33 = &std::io::stdio::stderr::INSTANCE;
            v18 = <std::io::stdio::Stderr as std::io::Write>::flush(&v33);
            if ( v18 )
            {
              v25 = v18;
              v39[0] = uucore::util_name();
              v39[1] = v22;
              v38[0] = v39;
              v38[1] = <&T as core::fmt::Display>::fmt;
              v60[0] = &unk_1820C0;
              v60[1] = 2LL;
              v60[4] = 0LL;
              v60[2] = v38;
              v60[3] = 1LL;
              std::io::stdio::_eprint(v60);
              v40[0] = &v25;
              v40[1] = <std::io::error::Error as core::fmt::Display>::fmt;
              v61[0] = &unk_1820E0;
              v61[1] = 2LL;
              v61[4] = 0LL;
              v61[2] = v40;
              v61[3] = 1LL;
              std::io::stdio::_eprint(v61);
              std::process::exit(1);
            }
            yes = uucore::read_yes();
            if ( v30 )
              _rust_dealloc(v31, v30, 1LL);
            if ( v27 )
              _rust_dealloc(v28, v27, 1LL);
            if ( yes )
              goto LABEL_16;
            goto LABEL_23;
          }
        }
LABEL_14:
        v11 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v12 = *(_QWORD *)(v11 + 8);
        v13 = *(_QWORD *)(v11 + 16);
        core::slice::raw::from_raw_parts::precondition_check(v12, 1LL, 1LL, v13);
        v42[0] = v12;
        v42[1] = v13;
        v41[0] = v42;
        v41[1] = <&T as core::fmt::Display>::fmt;
        v62[0] = &unk_1820C0;
        v62[1] = 2LL;
        v62[4] = 0LL;
        v62[2] = v41;
        v62[3] = 1LL;
        std::io::stdio::_eprint(v62);
        v54[0] = 1LL;
        v54[1] = a3;
        v54[2] = a4;
        v55 = 1;
        v43[0] = v54;
        v43[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v63[0] = &off_1821F8;
        v63[1] = 2LL;
        v63[4] = 0LL;
        v63[2] = v43;
        v63[3] = 1LL;
        std::io::stdio::_eprint(v63);
        v70[0] = &off_1821E8;
        v70[1] = 1LL;
        v70[2] = 8LL;
        v71 = 0LL;
        std::io::stdio::_eprint(v70);
        v34 = &std::io::stdio::stderr::INSTANCE;
        v14 = <std::io::stdio::Stderr as std::io::Write>::flush(&v34);
        if ( v14 )
        {
          v26 = v14;
          v45[0] = uucore::util_name();
          v45[1] = v21;
          v44[0] = v45;
          v44[1] = <&T as core::fmt::Display>::fmt;
          v64[0] = &unk_1820C0;
          v64[1] = 2LL;
          v64[4] = 0LL;
          v64[2] = v44;
          v64[3] = 1LL;
          std::io::stdio::_eprint(v64);
          v46[0] = &v26;
          v46[1] = <std::io::error::Error as core::fmt::Display>::fmt;
          v65[0] = &unk_1820E0;
          v65[1] = 2LL;
          v65[4] = 0LL;
          v65[2] = v46;
          v65[3] = 1LL;
          std::io::stdio::_eprint(v65);
          std::process::exit(1);
        }
        if ( (unsigned __int8)uucore::read_yes() )
          goto LABEL_16;
LABEL_23:
        *(_QWORD *)a1 = 8LL;
        *(_BYTE *)(a1 + 8) = 1;
        return a1;
      }
      v7 = dest[1];
    }
    std::io::error::repr_bitpacked::decode_repr(src, v7);
    if ( LOBYTE(src[0]) >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&src[1]);
    goto LABEL_14;
  }
  if ( a5 )
  {
    v50[0] = 1LL;
    v50[1] = a3;
    v50[2] = a4;
    v51 = 1;
    v35[0] = v50;
    v35[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v57[0] = &off_182218;
    v57[1] = 2LL;
    v57[4] = 0LL;
    v57[2] = v35;
    v57[3] = 1LL;
    std::io::stdio::_print(v57);
  }
  *(_QWORD *)a1 = 8LL;
  *(_BYTE *)(a1 + 8) = 0;
  return a1;
}
