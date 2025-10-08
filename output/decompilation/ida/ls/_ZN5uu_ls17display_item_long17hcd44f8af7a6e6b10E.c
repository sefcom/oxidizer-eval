__int64 __fastcall uu_ls::display_item_long(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  void *v10; // rdx
  __int64 metadata; // r15
  unsigned __int8 is_ok_and; // bp
  unsigned __int64 v13; // rax
  char *v14; // rdx
  char *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  char *v19; // r12
  __int64 v20; // rbp
  char *v21; // rdi
  int v22; // eax
  char *v23; // rsi
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rbp
  int v27; // r8d
  size_t v28; // r13
  __int64 v29; // r15
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // rbp
  char *v33; // r12
  unsigned __int64 v34; // rax
  __int64 v35; // rdi
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rsi
  bool v39; // cf
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // r8d
  char *v44; // r13
  __int64 v45; // r12
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rsi
  size_t v49; // r14
  __int64 v50; // r15
  __int64 v51; // rbx
  __int64 v53; // rax
  char v54; // [rsp+Fh] [rbp-E9h]
  __int64 v55; // [rsp+10h] [rbp-E8h] BYREF
  void *src; // [rsp+18h] [rbp-E0h]
  size_t n; // [rsp+20h] [rbp-D8h]
  __int64 v58; // [rsp+28h] [rbp-D0h]
  __int128 v59; // [rsp+30h] [rbp-C8h] BYREF
  char *v60; // [rsp+40h] [rbp-B8h]
  _QWORD v61[3]; // [rsp+48h] [rbp-B0h] BYREF
  __int128 v62; // [rsp+60h] [rbp-98h] BYREF
  char *v63; // [rsp+70h] [rbp-88h]
  int v64; // [rsp+7Ch] [rbp-7Ch]
  __int64 v65; // [rsp+80h] [rbp-78h] BYREF
  __int64 v66; // [rsp+88h] [rbp-70h]
  __int64 v67; // [rsp+90h] [rbp-68h]
  __int64 v68; // [rsp+98h] [rbp-60h]
  __int64 v69; // [rsp+A0h] [rbp-58h]
  __int64 v70; // [rsp+A8h] [rbp-50h]
  __int64 v71; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v72; // [rsp+B8h] [rbp-40h]
  char *v73; // [rsp+C0h] [rbp-38h]

  v64 = a6;
  v58 = a1;
  v55 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(128LL, 1LL, 1LL, &off_286CD0);
  src = v10;
  n = 0LL;
  if ( *(_BYTE *)(a4 + 133) != 2 )
  {
    uu_ls::colors::StyleManager::apply_normal(&v59, (__int64 *)(a4 + 104));
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v55,
      *((_QWORD *)&v59 + 1),
      &v60[*((_QWORD *)&v59 + 1)]);
    core::ptr::drop_in_place<alloc::string::String>(&v59);
  }
  v54 = *(_BYTE *)(a3 + 246);
  if ( v54 )
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v55,
      asc_D2809,
      aSrcUuLsSrcDire);
  metadata = uu_ls::PathData::get_metadata(v58, a4);
  if ( metadata )
  {
    xattr::list(&v59, *(_QWORD *)(v58 + 8), *(_QWORD *)(v58 + 16));
    is_ok_and = core::result::Result<T,E>::is_ok_and(&v59);
    uucore::features::fs::display_permissions(&v59, metadata, 1LL);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v55,
      *((_QWORD *)&v59 + 1),
      &v60[*((_QWORD *)&v59 + 1)]);
    core::ptr::drop_in_place<alloc::string::String>(&v59);
    v13 = *(_QWORD *)(v58 + 64);
    if ( is_ok_and | (v13 >= 2) )
    {
      v14 = &aBd[2];
      if ( v13 >= 2 )
        v14 = asc_D164C;
      v15 = &aBd[1];
      if ( v13 >= 2 )
        v15 = asc_D164B;
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v55,
        v15,
        v14);
    }
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v55,
      asc_D1D8F,
      &unk_D1D90);
    uu_ls::display_symlink_count(&v59, *(_QWORD *)(metadata + 48));
    <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_left(&v55, *((_QWORD *)&v59 + 1), v60, a2[1]);
    core::ptr::drop_in_place<alloc::string::String>(&v59);
    if ( *(_BYTE *)(a3 + 234) )
    {
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v55,
        asc_D1D8F,
        &unk_D1D90);
      v16 = uu_ls::display_uname(*(unsigned int *)(metadata + 60), *(unsigned __int8 *)(a3 + 235), a4);
      <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_right(
        &v55,
        *(_QWORD *)(v16 + 8),
        *(_QWORD *)(v16 + 16),
        a2[2]);
    }
    if ( *(_BYTE *)(a3 + 233) )
    {
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v55,
        asc_D1D8F,
        &unk_D1D90);
      v17 = uu_ls::display_group(*(unsigned int *)(metadata + 64), *(unsigned __int8 *)(a3 + 235), a4);
      <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_right(
        &v55,
        *(_QWORD *)(v17 + 8),
        *(_QWORD *)(v17 + 16),
        a2[3]);
    }
    if ( *(_BYTE *)(a3 + 243) )
    {
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v55,
        asc_D1D8F,
        &unk_D1D90);
      <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_right(
        &v55,
        *(_QWORD *)(v58 + 56),
        *(_QWORD *)(v58 + 64),
        a2[4]);
    }
    if ( *(_BYTE *)(a3 + 232) )
    {
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v55,
        asc_D1D8F,
        &unk_D1D90);
      v18 = uu_ls::display_uname(*(unsigned int *)(metadata + 60), *(unsigned __int8 *)(a3 + 235), a4);
      <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_right(
        &v55,
        *(_QWORD *)(v18 + 8),
        *(_QWORD *)(v18 + 16),
        a2[2]);
    }
    uu_ls::display_len_or_rdev(&v59, metadata, *(_QWORD *)(a3 + 208), *(unsigned __int8 *)(a3 + 249));
    v70 = a5;
    if ( __OFSUB__(0LL, (_QWORD)v59) )
    {
      v19 = v60;
      v20 = v61[0];
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v55,
        asc_D1D8F,
        &unk_D1D90);
      <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_left(&v55, v19, v20, a2[5]);
      v21 = (char *)&v59 + 8;
    }
    else
    {
      v32 = *((_QWORD *)&v59 + 1);
      v33 = v60;
      v69 = v61[1];
      v68 = v61[2];
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v55,
        asc_D1D8F,
        &unk_D1D90);
      v34 = a2[5];
      v35 = a2[6];
      v36 = a2[7];
      v37 = -1LL;
      if ( v36 < 0xFFFFFFFFFFFFFFFELL )
        v37 = v36 + 2;
      v38 = 0LL;
      v39 = v34 < v37;
      v40 = v34 - v37;
      if ( !v39 )
        v38 = v40;
      v41 = core::cmp::Ord::max(v35, v38);
      <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_left(&v55, v32, v33, v41);
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v55,
        asc_D1EC7,
        &byte_D1EC9);
      <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_left(&v55, v69, v68, v36);
      core::ptr::drop_in_place<alloc::string::String>(v61);
      v21 = (char *)&v59;
    }
    core::ptr::drop_in_place<alloc::string::String>(v21);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v55,
      asc_D1D8F,
      &unk_D1D90);
    uu_ls::display_date(&v59, metadata, *(unsigned __int8 *)(a3 + 251), a4);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v55,
      *((_QWORD *)&v59 + 1),
      &v60[*((_QWORD *)&v59 + 1)]);
    core::ptr::drop_in_place<alloc::string::String>(&v59);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v55,
      asc_D1D8F,
      &unk_D1D90);
    *(_QWORD *)&v62 = 0LL;
    *((_QWORD *)&v62 + 1) = 1LL;
    v63 = 0LL;
    v42 = alloc::boxed::Box<T>::new(&v55);
    *(_QWORD *)&v59 = 0LL;
    *((_QWORD *)&v59 + 1) = v42;
    v60 = (char *)&unk_286CE8;
    uu_ls::display_item_name((unsigned int)&v71, v58, a3, 0, v43, (unsigned int)&v62, a4, (__int64)&v59);
    v29 = v72;
    v44 = v73;
    if ( (_BYTE)v64 && !(unsigned __int8)uu_ls::os_str_starts_with(v72, v73, asc_D4209) )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v59, asc_D1D8F, 1LL);
      v63 = v60;
      v62 = v59;
      std::ffi::os_str::OsString::push(&v62, &v71);
      v29 = *((_QWORD *)&v62 + 1);
      v45 = v62;
      v44 = v63;
      if ( !v54 )
      {
LABEL_54:
        uu_ls::write_os_str(&v55, v29, v44);
        <T as alloc::string::SpecToString>::spec_to_string(&v59, a3 + 258);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v55,
          *((_QWORD *)&v59 + 1),
          &v60[*((_QWORD *)&v59 + 1)]);
        core::ptr::drop_in_place<alloc::string::String>(&v59);
        v46 = v45;
        goto LABEL_55;
      }
    }
    else
    {
      v45 = v71;
      if ( !v54 )
        goto LABEL_54;
    }
    v47 = *(_QWORD *)(v70 + 16);
    if ( v47 )
      v48 = *(_QWORD *)(*(_QWORD *)(v70 + 8) + 16 * v47 - 8) + 1LL;
    else
      v48 = 0LL;
    uu_ls::dired::update_positions(v70, n + v48, (__int64)&v44[n + v48]);
    goto LABEL_54;
  }
  v22 = *(_DWORD *)(v58 + 248);
  v23 = &aBd[13];
  if ( v22 != 2 && (v22 & 1) != 0 )
  {
    v24 = __ROL4__((*(_DWORD *)(v58 + 252) & 0xF000) - 0x2000, 19);
    if ( v24 <= 4 )
      v23 = (char *)dword_D44C0 + dword_D44C0[v24];
  }
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v55,
    v23,
    v23 + 1);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v55,
    &aBd[2],
    &aBd[11]);
  if ( *(_QWORD *)(v58 + 64) >= 2uLL )
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v55,
      asc_D164B,
      asc_D164C);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v55,
    asc_D1D8F,
    &unk_D1D90);
  <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_left(&v55, asc_D4206, 1LL, a2[1]);
  if ( *(_BYTE *)(a3 + 234) )
  {
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v55,
      asc_D1D8F,
      &unk_D1D90);
    <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_right(&v55, asc_D4206, 1LL, a2[2]);
  }
  if ( *(_BYTE *)(a3 + 233) )
  {
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v55,
      asc_D1D8F,
      &unk_D1D90);
    <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_right(&v55, asc_D4206, 1LL, a2[3]);
  }
  if ( *(_BYTE *)(a3 + 243) )
  {
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v55,
      asc_D1D8F,
      &unk_D1D90);
    <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_right(
      &v55,
      *(_QWORD *)(v58 + 56),
      *(_QWORD *)(v58 + 64),
      a2[4]);
  }
  if ( *(_BYTE *)(a3 + 232) )
  {
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v55,
      asc_D1D8F,
      &unk_D1D90);
    <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_right(&v55, asc_D4206, 1LL, a2[2]);
  }
  *(_QWORD *)&v62 = 0LL;
  *((_QWORD *)&v62 + 1) = 1LL;
  v63 = 0LL;
  v25 = alloc::boxed::Box<T>::new(&v55);
  v26 = a5;
  *(_QWORD *)&v59 = 0LL;
  *((_QWORD *)&v59 + 1) = v25;
  v60 = (char *)&unk_286D08;
  uu_ls::display_item_name((unsigned int)&v65, v58, a3, 0, v27, (unsigned int)&v62, a4, (__int64)&v59);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v55,
    asc_D1D8F,
    &unk_D1D90);
  <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_left(&v55, asc_D4206, 1LL, a2[5]);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v55,
    asc_D1D8F,
    &unk_D1D90);
  <alloc::vec::Vec<u8> as uu_ls::ExtendPad>::extend_pad_left(&v55, asc_D4206, 1LL, 12LL);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v55,
    asc_D1D8F,
    &unk_D1D90);
  if ( v54 )
  {
    v28 = n;
    v29 = v66;
    v30 = v67;
    alloc::string::String::from_utf8_lossy(&v59, v66);
    v31 = core::str::<impl str>::trim_matches(*((_QWORD *)&v59 + 1), v60);
    uu_ls::dired::calculate_and_update_positions(v26, v28, v31);
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v59);
  }
  else
  {
    v29 = v66;
    v30 = v67;
  }
  uu_ls::write_os_str(&v55, v29, v30);
  <T as alloc::string::SpecToString>::spec_to_string(&v59, a3 + 258);
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    &v55,
    *((_QWORD *)&v59 + 1),
    &v60[*((_QWORD *)&v59 + 1)]);
  core::ptr::drop_in_place<alloc::string::String>(&v59);
  v46 = v65;
LABEL_55:
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(v46, v29);
  v49 = n;
  v50 = *(_QWORD *)(a4 + 16);
  if ( n >= *(_QWORD *)a4 - v50 )
  {
    v53 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a4, src, n);
    if ( v53 )
    {
      v51 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v53);
      goto LABEL_58;
    }
  }
  else
  {
    memcpy((void *)(v50 + *(_QWORD *)(a4 + 8)), src, n);
    *(_QWORD *)(a4 + 16) = v49 + v50;
  }
  v51 = 0LL;
LABEL_58:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v55, src);
  return v51;
}