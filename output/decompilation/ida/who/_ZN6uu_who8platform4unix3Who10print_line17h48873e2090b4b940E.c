__int64 __fastcall uu_who::platform::unix::Who::print_line(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        __int128 a9,
        __int128 a10,
        __int128 a11)
{
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(); // rax
  unsigned __int8 v14; // al
  unsigned __int8 v15; // al
  unsigned __int8 v16; // al
  unsigned __int8 v17; // al
  unsigned __int8 v18; // al
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  __int64 (__fastcall *v21)(); // rdx
  void *v23; // [rsp+8h] [rbp-130h] BYREF
  __int64 v24; // [rsp+10h] [rbp-128h]
  __int128 **v25; // [rsp+18h] [rbp-120h]
  __int64 v26; // [rsp+20h] [rbp-118h]
  void *v27; // [rsp+28h] [rbp-110h]
  __int64 v28; // [rsp+30h] [rbp-108h]
  __int128 *v29; // [rsp+38h] [rbp-100h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+40h] [rbp-F8h]
  __int64 v31; // [rsp+48h] [rbp-F0h]
  __int16 v32; // [rsp+50h] [rbp-E8h]
  __int64 v33; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-D8h]
  __int64 v35; // [rsp+68h] [rbp-D0h]
  _BYTE v36[8]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+78h] [rbp-C0h]
  __int64 v38; // [rsp+80h] [rbp-B8h]
  _QWORD v39[2]; // [rsp+88h] [rbp-B0h] BYREF
  _QWORD v40[2]; // [rsp+98h] [rbp-A0h] BYREF
  _QWORD v41[2]; // [rsp+A8h] [rbp-90h] BYREF
  __int128 v42; // [rsp+B8h] [rbp-80h] BYREF
  __int128 v43; // [rsp+C8h] [rbp-70h] BYREF
  __int128 v44; // [rsp+D8h] [rbp-60h] BYREF
  __int128 v45; // [rsp+E8h] [rbp-50h] BYREF
  __int128 v46; // [rsp+F8h] [rbp-40h] BYREF

  v39[0] = a2;
  v39[1] = a3;
  v40[0] = a5;
  v40[1] = a6;
  v42 = a7;
  v43 = a8;
  v44 = a9;
  v45 = a10;
  v46 = a11;
  v33 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(64LL, 1LL, 1LL, &off_FEFD8);
  v34 = v12;
  v35 = 0LL;
  v13 = (__int64 (__fastcall *)())alloc::alloc::Global::alloc_impl(4LL, 8LL);
  if ( !v13 )
    alloc::alloc::handle_alloc_error(4LL, 8LL);
  *(_DWORD *)v13 = 32;
  *((_DWORD *)v13 + 1) = a4;
  v29 = (_OWORD *)(&dword_0 + 2);
  v30 = v13;
  v31 = 2LL;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v23, &v29);
  core::iter::traits::iterator::Iterator::collect(v36, &v23);
  v29 = (__int128 *)v39;
  v30 = <&T as core::fmt::Display>::fmt;
  v23 = &unk_18A60;
  v24 = 1LL;
  v27 = &unk_1AB98;
  v28 = 1LL;
  v25 = &v29;
  v26 = 1LL;
  v14 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v33, &v23);
  core::result::Result<T,E>::unwrap(v14, &off_FEFF0);
  if ( a1[29] )
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      &v33,
      v37,
      v37 + v38);
  v29 = (__int128 *)v40;
  v30 = <&T as core::fmt::Display>::fmt;
  v23 = &off_FF008;
  v24 = 1LL;
  v27 = &unk_1ABC8;
  v28 = 1LL;
  v25 = &v29;
  v26 = 1LL;
  v15 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v33, &v23);
  core::result::Result<T,E>::unwrap(v15, &off_FF018);
  v29 = &v42;
  v30 = <&T as core::fmt::Display>::fmt;
  v31 = 0LL;
  v32 = 10;
  v23 = &off_FF008;
  v24 = 1LL;
  v27 = &unk_1ABF8;
  v28 = 1LL;
  v25 = &v29;
  v26 = 2LL;
  v16 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v33, &v23);
  core::result::Result<T,E>::unwrap(v16, &off_FF030);
  if ( !a1[26] )
  {
    if ( a1[27] )
    {
      v29 = &v43;
      v30 = <&T as core::fmt::Display>::fmt;
      v23 = &off_FF008;
      v24 = 1LL;
      v27 = &unk_1AC28;
      v28 = 1LL;
      v25 = &v29;
      v26 = 1LL;
      v17 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v33, &v23);
      core::result::Result<T,E>::unwrap(v17, &off_FF048);
    }
    v29 = &v44;
    v30 = <&T as core::fmt::Display>::fmt;
    v23 = &off_FF008;
    v24 = 1LL;
    v27 = &unk_1AC58;
    v28 = 1LL;
    v25 = &v29;
    v26 = 1LL;
    v18 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v33, &v23);
    core::result::Result<T,E>::unwrap(v18, &off_FF060);
  }
  v29 = &v45;
  v30 = <&T as core::fmt::Display>::fmt;
  v23 = &off_FF008;
  v24 = 1LL;
  v27 = &unk_1AB98;
  v28 = 1LL;
  v25 = &v29;
  v26 = 1LL;
  v19 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v33, &v23);
  core::result::Result<T,E>::unwrap(v19, &off_FF078);
  if ( a1[30] )
  {
    v29 = &v46;
    v30 = <&T as core::fmt::Display>::fmt;
    v23 = &off_FF008;
    v24 = 1LL;
    v27 = &unk_1ABC8;
    v28 = 1LL;
    v25 = &v29;
    v26 = 1LL;
    v20 = <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v33, &v23);
    core::result::Result<T,E>::unwrap(v20, &off_FF090);
  }
  v29 = (__int128 *)core::str::<impl str>::trim_end_matches(v34, v35);
  v30 = v21;
  v41[0] = &v29;
  v41[1] = <&T as core::fmt::Display>::fmt;
  v23 = &unk_FEF18;
  v24 = 2LL;
  v27 = 0LL;
  v25 = (__int128 **)v41;
  v26 = 1LL;
  std::io::stdio::_print(&v23);
  core::ptr::drop_in_place<alloc::string::String>(v36);
  return core::ptr::drop_in_place<alloc::string::String>(&v33);
}