__int64 __fastcall uu_ptx::write_traditional_output(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 (__fastcall **v10)(); // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rsi
  int v16; // r15d
  char v17; // bp
  char v18; // r12
  __int64 v19; // rax
  _QWORD *v20; // rbx
  __int64 inner; // rax
  _QWORD *v22; // r14
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  char **v32; // rax
  __int128 v33; // [rsp+0h] [rbp-178h]
  __int128 v34; // [rsp+0h] [rbp-178h]
  char **v35; // [rsp+28h] [rbp-150h]
  _BYTE v38[8]; // [rsp+40h] [rbp-138h] BYREF
  __int64 v39; // [rsp+48h] [rbp-130h]
  __int64 v40; // [rsp+50h] [rbp-128h]
  void *v41; // [rsp+58h] [rbp-120h] BYREF
  __int64 v42; // [rsp+60h] [rbp-118h]
  _QWORD *v43; // [rsp+68h] [rbp-110h]
  __int64 v44; // [rsp+70h] [rbp-108h]
  __int64 v45; // [rsp+78h] [rbp-100h]
  _QWORD v46[2]; // [rsp+88h] [rbp-F0h] BYREF
  _QWORD v47[9]; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v48[4]; // [rsp+E0h] [rbp-98h] BYREF
  _BYTE v49[48]; // [rsp+100h] [rbp-78h] BYREF
  _BYTE v50[72]; // [rsp+130h] [rbp-48h] BYREF

  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a4, a5, asc_55AD1, 1LL) )
  {
    v8 = std::io::stdio::stdout();
    v9 = alloc::boxed::Box<T>::new(v8);
    v10 = (__int64 (__fastcall **)())&unk_251D38;
  }
  else
  {
    std::fs::File::create(v47, a4, a5);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v41,
      v47,
      a4,
      a5);
    v11 = (__int64)v41;
    if ( v41 )
      return v11;
    v9 = alloc::boxed::Box<T>::new((unsigned int)v42);
    v10 = &off_251CE8;
  }
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(v49, v9, v10);
  regex::regex::string::Regex::new(v47, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64));
  core::result::Result<T,E>::unwrap(v48, v47, &off_251D88);
  v12 = *a3;
  v13 = a3[1];
  v14 = 0LL;
  v15 = *a3;
  if ( *a3 )
    v15 = a3[2];
  LOBYTE(v14) = *a3 != 0;
  v47[0] = v14;
  v47[1] = 0LL;
  v47[2] = v12;
  v47[3] = v13;
  v47[4] = v14;
  v47[5] = 0LL;
  v47[6] = v12;
  v47[7] = v13;
  v47[8] = v15;
  v16 = *(unsigned __int8 *)(a1 + 93);
  v17 = *(_BYTE *)(a1 + 89);
  v18 = *(_BYTE *)(a1 + 90);
  v35 = &off_251E00;
  while ( 1 )
  {
    v19 = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v47);
    v20 = (_QWORD *)v19;
    if ( !v19 )
      break;
    inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a2, v19 + 24);
    v22 = (_QWORD *)inner;
    if ( !inner )
      core::option::expect_failed(aMissingFileInF, 24LL, &off_251DA0);
    v23 = v20[7];
    v24 = *(_QWORD *)(inner + 40);
    if ( v23 >= v24 )
      core::panicking::panic_bounds_check(v23, v24, &off_251DB8);
    uu_ptx::get_reference(
      (__int64)v38,
      v17,
      v18,
      (__int64)v20,
      *(_QWORD *)(*(_QWORD *)(inner + 32) + 24 * v23 + 8),
      *(_QWORD *)(*(_QWORD *)(inner + 32) + 24 * v23 + 16),
      v48[0],
      v48[1]);
    if ( v16 == 1 )
    {
      v25 = v20[7];
      v26 = v22[5];
      if ( v25 >= v26 )
      {
        v32 = &off_251DD0;
        goto LABEL_35;
      }
      v26 = v22[8];
      if ( v25 >= v26 )
      {
        v32 = &off_251DE8;
        goto LABEL_35;
      }
      v28 = 8 * v25;
      v34 = *(_OWORD *)(v22[7] + 3 * v28 + 8);
      uu_ptx::format_roff_line(
        (__int64)v50,
        a1,
        v20[8],
        v20[9],
        *(_QWORD *)(v22[4] + 3 * v28 + 8),
        *(_QWORD *)(v22[4] + 3 * v28 + 16),
        v34,
        *((__int64 *)&v34 + 1),
        v39,
        v40);
    }
    else
    {
      if ( v16 != 2 )
      {
        LOBYTE(v41) = 0;
        v11 = alloc::boxed::Box<T>::new(&v41);
LABEL_25:
        core::ptr::drop_in_place<alloc::string::String>(v38);
        goto LABEL_26;
      }
      v25 = v20[7];
      v26 = v22[5];
      if ( v25 >= v26 )
        goto LABEL_36;
      v26 = v22[8];
      if ( v25 >= v26 )
      {
        v32 = &off_251E18;
LABEL_35:
        v35 = v32;
LABEL_36:
        core::panicking::panic_bounds_check(v25, v26, v35);
      }
      v27 = 8 * v25;
      v33 = *(_OWORD *)(v22[7] + 3 * v27 + 8);
      uu_ptx::format_tex_line(
        (__int64)v50,
        (_BYTE *)a1,
        v20[8],
        v20[9],
        *(_QWORD *)(v22[4] + 3 * v27 + 8),
        *(_QWORD *)(v22[4] + 3 * v27 + 16),
        v33,
        *((__int64 *)&v33 + 1),
        v39,
        v40);
    }
    v46[0] = v50;
    v46[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v41 = &unk_251CC8;
    v42 = 2LL;
    v45 = 0LL;
    v43 = v46;
    v44 = 1LL;
    v29 = std::io::Write::write_fmt(v49, &v41);
    v11 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v29);
    core::ptr::drop_in_place<alloc::string::String>(v50);
    if ( v11 )
      goto LABEL_25;
    core::ptr::drop_in_place<alloc::string::String>(v38);
  }
  v30 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v49);
  v11 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v30);
  if ( v11 )
  {
LABEL_26:
    core::ptr::drop_in_place<regex::regex::string::Regex>(v48);
    goto LABEL_27;
  }
  core::ptr::drop_in_place<regex::regex::string::Regex>(v48);
  v11 = 0LL;
LABEL_27:
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v49);
  return v11;
}