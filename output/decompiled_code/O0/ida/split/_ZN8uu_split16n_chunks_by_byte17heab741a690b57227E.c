__int64 __fastcall uu_split::n_chunks_by_byte(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 input_size; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  _OWORD *v11; // rax
  __int64 v12; // r13
  __int128 v13; // xmm0
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v17; // rbx
  unsigned __int64 v18; // r14
  char v19; // r15
  unsigned __int64 v20; // r12
  _BOOL8 v21; // rax
  bool v22; // cf
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  _QWORD *v25; // rbx
  void *v26; // r14
  size_t v27; // r13
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rbx
  bool v33; // zf
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // [rsp+0h] [rbp-1D8h]
  unsigned __int64 v40; // [rsp+0h] [rbp-1D8h]
  __int64 v41; // [rsp+8h] [rbp-1D0h] BYREF
  __int64 v42; // [rsp+10h] [rbp-1C8h] BYREF
  void *src; // [rsp+18h] [rbp-1C0h]
  size_t n; // [rsp+20h] [rbp-1B8h]
  __int64 v45; // [rsp+28h] [rbp-1B0h] BYREF
  __int64 v46; // [rsp+30h] [rbp-1A8h]
  __int64 v47; // [rsp+38h] [rbp-1A0h]
  _QWORD *v48; // [rsp+40h] [rbp-198h]
  unsigned __int64 v49; // [rsp+48h] [rbp-190h] BYREF
  __int64 v50; // [rsp+50h] [rbp-188h] BYREF
  __int64 v51; // [rsp+58h] [rbp-180h]
  __int64 v52; // [rsp+60h] [rbp-178h]
  unsigned __int64 v53; // [rsp+68h] [rbp-170h]
  unsigned __int64 v54; // [rsp+70h] [rbp-168h]
  void *dest; // [rsp+78h] [rbp-160h]
  __int64 v56; // [rsp+80h] [rbp-158h]
  __int64 v57; // [rsp+88h] [rbp-150h]
  __int64 v58; // [rsp+90h] [rbp-148h]
  _QWORD *v59; // [rsp+98h] [rbp-140h]
  __int64 v60; // [rsp+A0h] [rbp-138h] BYREF
  _QWORD v61[2]; // [rsp+A8h] [rbp-130h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-120h] BYREF
  _QWORD *v63; // [rsp+C0h] [rbp-118h]
  _QWORD v64[3]; // [rsp+C8h] [rbp-110h] BYREF
  _QWORD v65[3]; // [rsp+E0h] [rbp-F8h] BYREF
  char v66; // [rsp+F8h] [rbp-E0h]
  _QWORD v67[4]; // [rsp+100h] [rbp-D8h] BYREF
  __int128 v68; // [rsp+120h] [rbp-B8h]
  __int128 v69; // [rsp+130h] [rbp-A8h]
  __int128 v70; // [rsp+140h] [rbp-98h] BYREF
  __int64 v71; // [rsp+150h] [rbp-88h]
  __int128 v72; // [rsp+160h] [rbp-78h] BYREF
  __int64 v73; // [rsp+170h] [rbp-68h]
  _QWORD v74[12]; // [rsp+178h] [rbp-60h] BYREF

  v50 = 0LL;
  v51 = 1LL;
  v52 = 0LL;
  v59 = a1 + 14;
  v48 = a1;
  input_size = uu_split::get_input_size((__int64)(a1 + 14), a2, (__int64)&v50, a1);
  v10 = v9;
  if ( input_size )
  {
    *(_QWORD *)&v68 = 0x8000000000000000LL;
    *((_QWORD *)&v69 + 1) = v9;
    v11 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    v12 = (__int64)v11;
    if ( !v11 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v13 = v68;
    v11[1] = v69;
    *v11 = v13;
    goto LABEL_17;
  }
  if ( !v51 || v52 < 0 )
    goto LABEL_69;
  v65[0] = v51;
  v65[1] = v52;
  v65[2] = a2;
  v66 = 0;
  if ( a4 == 1 && !v9 )
    goto LABEL_16;
  if ( a4 != 1 )
  {
    v14 = a3;
    if ( v9 < a3 )
      v14 = v9;
    if ( (*((_BYTE *)v48 + 161) & 1) != 0 )
      a3 = v14;
  }
  if ( !a3 )
  {
LABEL_16:
    v12 = 0LL;
    goto LABEL_17;
  }
  v60 = std::io::stdio::stdout();
  v41 = std::io::stdio::Stdout::lock(&v60);
  v45 = 0LL;
  v46 = 8LL;
  v47 = 0LL;
  if ( (a3 | v10) >> 32 )
  {
    v15 = v10 / a3;
    v54 = v10 % a3;
  }
  else
  {
    v15 = (unsigned int)v10 / (unsigned int)a3;
    v54 = (unsigned int)v10 % (unsigned int)a3;
  }
  v53 = v15;
  if ( a4 != 1 )
  {
    <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::init(v64, a3, v48, 0LL);
    v17 = v64[0];
    v12 = v64[1];
    v39 = v64[2];
    if ( v64[0] == 0x8000000000000000LL )
      goto LABEL_64;
    core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v45);
    v45 = v17;
    v46 = v12;
    v47 = v39;
  }
  v40 = a3;
  v58 = a4;
  v57 = a5;
  v18 = 1LL;
  v19 = 0;
  v20 = 1LL;
  while ( 1 )
  {
    v20 += v18 < v40;
    if ( v18 >= v40 )
      v19 = 1;
    v21 = v54 > v18 - 1;
    v22 = __CFADD__(v53, v21);
    v23 = v53 + v21;
    if ( v22 )
      core::panicking::panic_const::panic_const_add_overflow(&off_135940);
    v42 = 0LL;
    src = &dword_0 + 1;
    n = 0LL;
    if ( !v10 )
      goto LABEL_55;
    if ( v18 == v40 )
      v23 = v10;
    v61[0] = v65;
    v61[1] = v23;
    if ( std::io::default_read_to_end(v61, &v42, 0LL) )
    {
      v49 = v24;
      v67[0] = v59;
      v67[1] = <alloc::string::String as core::fmt::Display>::fmt;
      v67[2] = &v49;
      v67[3] = <std::io::error::Error as core::fmt::Display>::fmt;
      v74[0] = &unk_1359A0;
      v74[1] = 2LL;
      v74[4] = 0LL;
      v74[2] = v67;
      v74[3] = 2LL;
      alloc::fmt::format(&v72, v74);
      v71 = v73;
      v70 = v72;
      v12 = uucore::mods::error::USimpleError::new(1LL, &v70);
      core::ptr::drop_in_place<std::io::error::Error>(&v49);
      goto LABEL_62;
    }
    v22 = v10 < v24;
    v10 -= v24;
    if ( v22 )
      core::panicking::panic_const::panic_const_sub_overflow(&off_135958);
    if ( !v58 )
      break;
    if ( v18 == v57 )
    {
      if ( src && (n & 0x8000000000000000LL) == 0LL )
      {
        v30 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v41);
        if ( v30 )
        {
          v31 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                  v30,
                  &off_135988);
          goto LABEL_61;
        }
        if ( v42 )
          _rust_dealloc(src);
LABEL_55:
        core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v45);
        v32 = v41;
        v33 = (*(_DWORD *)(v41 + 12))-- == 1;
        if ( v33 )
        {
          v34 = core::option::Option<T>::map_or(0LL, 0LL);
          core::sync::atomic::atomic_store(v32, v34, 0LL);
          v35 = v41;
          if ( _InterlockedExchange((volatile __int32 *)(v41 + 8), 0) == 2 )
            std::sys::sync::mutex::futex::Mutex::wake(v35 + 8);
        }
        v12 = 0LL;
        if ( v50 )
          goto LABEL_18;
        return v12;
      }
LABEL_69:
      core::panicking::panic_nounwind(anon_69b1e845c8810c9cdb3b50477f5d946f_11_llvm_12964651969104725473, 162LL);
    }
LABEL_42:
    if ( v42 )
      _rust_dealloc(src);
    if ( (v19 & 1) == 0 )
    {
      v18 = v20;
      if ( v20 <= v40 )
        continue;
    }
    goto LABEL_55;
  }
  <alloc::vec::Vec<uu_split::OutFile> as uu_split::ManageOutFiles>::get_writer(&v62, &v45, v18 - 1, v48);
  v12 = v62;
  v25 = v63;
  if ( v62 )
    goto LABEL_62;
  v26 = src;
  if ( !src )
    goto LABEL_69;
  v27 = n;
  if ( (n & 0x8000000000000000LL) != 0LL )
    goto LABEL_69;
  v28 = v63[2];
  if ( *v63 - v28 > n )
  {
    dest = (void *)(v28 + v63[1]);
    v56 = v28;
    core::intrinsics::copy_nonoverlapping::precondition_check(src, dest, 1LL, 1LL, n);
    memcpy(dest, v26, v27);
    v25[2] = v27 + v56;
    goto LABEL_42;
  }
  v29 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v63, src, n);
  if ( !v29 )
    goto LABEL_42;
  v31 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
          v29,
          &off_135970);
LABEL_61:
  v12 = v31;
LABEL_62:
  if ( v42 )
    _rust_dealloc(src);
LABEL_64:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_split::OutFile>>(&v45);
  v36 = v41;
  v33 = (*(_DWORD *)(v41 + 12))-- == 1;
  if ( v33 )
  {
    v37 = core::option::Option<T>::map_or(0LL, 0LL);
    core::sync::atomic::atomic_store(v36, v37, 0LL);
    v38 = v41;
    if ( _InterlockedExchange((volatile __int32 *)(v41 + 8), 0) == 2 )
      std::sys::sync::mutex::futex::Mutex::wake(v38 + 8);
  }
LABEL_17:
  if ( v50 )
LABEL_18:
    _rust_dealloc(v51);
  return v12;
}
