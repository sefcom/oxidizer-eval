__int64 __fastcall uu_ptx::write_traditional_output(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 (__fastcall **v10)(); // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  _BOOL8 v15; // rdx
  int v16; // ebp
  __int64 v17; // rax
  _QWORD *v18; // rbx
  __int64 inner; // rax
  __int64 v20; // r15
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rsi
  __int64 v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  __int64 v30; // rax
  int v32; // [rsp+0h] [rbp-178h]
  __int128 v33; // [rsp+0h] [rbp-178h]
  __int128 v34; // [rsp+0h] [rbp-178h]
  __int64 v35; // [rsp+8h] [rbp-170h]
  __int64 v36; // [rsp+10h] [rbp-168h]
  unsigned int v37; // [rsp+28h] [rbp-150h]
  unsigned int v38; // [rsp+2Ch] [rbp-14Ch]
  char **v39; // [rsp+30h] [rbp-148h]
  _BYTE v41[8]; // [rsp+40h] [rbp-138h] BYREF
  __int64 v42; // [rsp+48h] [rbp-130h]
  __int64 v43; // [rsp+50h] [rbp-128h]
  void *v44; // [rsp+58h] [rbp-120h] BYREF
  __int64 v45; // [rsp+60h] [rbp-118h]
  _QWORD *v46; // [rsp+68h] [rbp-110h]
  __int64 v47; // [rsp+70h] [rbp-108h]
  __int64 v48; // [rsp+78h] [rbp-100h]
  _QWORD v49[2]; // [rsp+88h] [rbp-F0h] BYREF
  _QWORD v50[9]; // [rsp+98h] [rbp-E0h] BYREF
  _BYTE v51[24]; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v52[4]; // [rsp+F8h] [rbp-80h] BYREF
  _BYTE v53[96]; // [rsp+118h] [rbp-60h] BYREF

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a4, a5, asc_5ED6A, 1LL) )
  {
    v8 = std::io::stdio::stdout();
    v9 = alloc::boxed::Box<T>::new(v8);
    v10 = (__int64 (__fastcall **)())&unk_2EEB68;
  }
  else
  {
    std::fs::File::create(v50, a4, a5);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v44,
      v50);
    v11 = (__int64)v44;
    if ( v44 )
      return v11;
    v9 = alloc::boxed::Box<T>::new((unsigned int)v45);
    v10 = &off_2EEB18;
  }
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v53, 0x2000LL, v9, v10);
  regex::regex::string::Regex::new(v50, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64));
  core::result::Result<T,E>::unwrap(v52, v50, &off_2EEBB8);
  v12 = *a3;
  v13 = a3[1];
  v14 = *a3;
  v15 = *a3 != 0;
  if ( *a3 )
    v14 = a3[2];
  v50[0] = *a3 != 0;
  v50[1] = 0LL;
  v50[2] = v12;
  v50[3] = v13;
  v50[4] = v15;
  v50[5] = 0LL;
  v50[6] = v12;
  v50[7] = v13;
  v50[8] = v14;
  v16 = *(unsigned __int8 *)(a1 + 93);
  v38 = *(unsigned __int8 *)(a1 + 89);
  v37 = *(unsigned __int8 *)(a1 + 90);
  v39 = &off_2EEC18;
  while ( 1 )
  {
    v17 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v50);
    v18 = (_QWORD *)v17;
    if ( !v17 )
    {
      core::ptr::drop_in_place<regex::regex::string::Regex>(v52);
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v53);
      return 0LL;
    }
    inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a2, v17 + 24);
    v20 = inner;
    if ( !inner )
      core::option::expect_failed(aMissingFileInF, 24LL, &off_2EEBD0);
    v21 = v18[7];
    v22 = *(_QWORD *)(inner + 40);
    if ( v21 >= v22 )
      core::panicking::panic_bounds_check(v18[7], v22, &off_2EEBE8);
    v23 = *(_QWORD *)(inner + 32);
    uu_ptx::get_reference(
      (__int64)v41,
      v38,
      v37,
      (__int64)v18,
      *(_QWORD *)(v23 + 24 * v21 + 8),
      *(_QWORD *)(v23 + 24 * v21 + 16),
      v52[0],
      v52[1]);
    v28 = v23 + 24 * v21;
    if ( v16 != 1 )
      break;
    v29 = *(_QWORD *)(v20 + 64);
    if ( v21 >= v29 )
    {
      v39 = &off_2EEC00;
LABEL_27:
      core::panicking::panic_bounds_check(v21, v29, v39);
    }
    v34 = *(_OWORD *)(*(_QWORD *)(v20 + 56) + 24 * v21 + 8);
    uu_ptx::format_roff_line(
      (__int64)v51,
      a1,
      v18[8],
      v18[9],
      *(_QWORD *)(v28 + 8),
      *(_QWORD *)(v28 + 16),
      v34,
      *((__int64 *)&v34 + 1),
      v42,
      v43);
LABEL_17:
    v49[0] = v51;
    v49[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v44 = &unk_2EEC30;
    v45 = 2LL;
    v48 = 0LL;
    v46 = v49;
    v47 = 1LL;
    v30 = std::io::Write::write_fmt(v53, &v44);
    v11 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v30);
    if ( v11 )
    {
      core::ptr::drop_in_place<alloc::string::String>(v51);
      goto LABEL_22;
    }
    core::ptr::drop_in_place<alloc::string::String>(v51);
    core::ptr::drop_in_place<alloc::string::String>(v41);
  }
  if ( v16 == 2 )
  {
    v29 = *(_QWORD *)(v20 + 64);
    if ( v21 >= v29 )
      goto LABEL_27;
    v33 = *(_OWORD *)(*(_QWORD *)(v20 + 56) + 24 * v21 + 8);
    uu_ptx::format_tex_line(
      (__int64)v51,
      (_BYTE *)a1,
      v18[8],
      v18[9],
      *(_QWORD *)(v28 + 8),
      *(_QWORD *)(v28 + 16),
      v33,
      *((__int64 *)&v33 + 1),
      v42,
      v43);
    goto LABEL_17;
  }
  LOBYTE(v44) = 0;
  v11 = alloc::boxed::Box<T>::new(&v44, v38, v24, v25, v26, v27, v32, v35, v36);
LABEL_22:
  core::ptr::drop_in_place<alloc::string::String>(v41);
  core::ptr::drop_in_place<regex::regex::string::Regex>(v52);
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v53);
  return v11;
}
