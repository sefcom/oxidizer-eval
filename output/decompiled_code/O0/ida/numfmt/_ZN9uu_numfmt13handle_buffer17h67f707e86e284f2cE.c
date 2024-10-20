__int64 __fastcall uu_numfmt::handle_buffer(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // [rsp+8h] [rbp-200h]
  __int64 v11; // [rsp+90h] [rbp-178h]
  __int64 v12; // [rsp+98h] [rbp-170h]
  __int64 v13; // [rsp+A8h] [rbp-160h] BYREF
  _QWORD v14[2]; // [rsp+B0h] [rbp-158h] BYREF
  unsigned __int64 v15; // [rsp+C0h] [rbp-148h] BYREF
  __int128 v16; // [rsp+C8h] [rbp-140h]
  __int64 v17; // [rsp+D8h] [rbp-130h]
  __int128 v18; // [rsp+E0h] [rbp-128h]
  __int64 v19; // [rsp+F0h] [rbp-118h]
  __int64 v20; // [rsp+F8h] [rbp-110h]
  __int64 v21; // [rsp+100h] [rbp-108h]
  __int64 v22; // [rsp+108h] [rbp-100h]
  __int64 v23; // [rsp+110h] [rbp-F8h]
  __int128 v24; // [rsp+118h] [rbp-F0h] BYREF
  __int64 v25; // [rsp+128h] [rbp-E0h]
  _BYTE v26[48]; // [rsp+130h] [rbp-D8h] BYREF
  __int128 v27; // [rsp+160h] [rbp-A8h] BYREF
  __int128 v28; // [rsp+170h] [rbp-98h]
  __int128 v29; // [rsp+180h] [rbp-88h] BYREF
  __int64 v30; // [rsp+190h] [rbp-78h]
  __int64 v31; // [rsp+198h] [rbp-70h] BYREF
  __int64 v32; // [rsp+1A0h] [rbp-68h]
  __int128 v33; // [rsp+1A8h] [rbp-60h]
  __int64 v34; // [rsp+1B8h] [rbp-50h]
  __int128 v35; // [rsp+1C0h] [rbp-48h] BYREF
  __int64 v36; // [rsp+1D0h] [rbp-38h]
  __int128 *v37; // [rsp+1E8h] [rbp-20h]
  __int64 (__fastcall *v38)(); // [rsp+1F0h] [rbp-18h]

  v13 = std::io::BufRead::lines();
  v11 = core::iter::traits::iterator::Iterator::by_ref(&v13);
  v2 = core::iter::traits::iterator::Iterator::enumerate(v11);
  v14[0] = <I as core::iter::traits::collect::IntoIterator>::into_iter(v2, v3);
  v14[1] = v4;
  do
  {
    <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v15, v14);
    if ( (_QWORD)v16 == 0x8000000000000001LL )
      return 0LL;
    v18 = v16;
    v19 = v17;
    if ( (_QWORD)v16 == 0x8000000000000000LL )
    {
      v31 = *((_QWORD *)&v18 + 1);
      <T as alloc::string::ToString>::to_string(&v35, &v31);
      v34 = v36;
      v33 = v35;
      v32 = 0LL;
      v10 = alloc::alloc::exchange_malloc(32LL, 8LL);
      *(_QWORD *)v10 = v32;
      *(_OWORD *)(v10 + 8) = v33;
      *(_QWORD *)(v10 + 24) = v34;
      v12 = v10;
      core::ptr::drop_in_place<std::io::error::Error>(&v31);
      return v12;
    }
    if ( v15 < *(_QWORD *)(a2 + 192) )
    {
      v24 = v18;
      v25 = v19;
      v37 = &v24;
      v38 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v28 = &v24;
      *((_QWORD *)&v28 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v27 = v28;
      core::fmt::Arguments::new_v1(v26, &unk_11BFF0, &v27);
      std::io::stdio::_print(v26);
      v22 = 0LL;
      core::ptr::drop_in_place<alloc::string::String>(&v24);
    }
    else
    {
      v30 = v19;
      v29 = v18;
      v6 = <alloc::string::String as core::convert::AsRef<str>>::as_ref(&v29);
      v22 = uu_numfmt::format_and_handle_validation(v6, v7, a2);
      v23 = v8;
      core::ptr::drop_in_place<alloc::string::String>(&v29);
    }
    v20 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v22, v23);
    v21 = v9;
  }
  while ( !v20 );
  return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           v20,
           v21,
           &off_11C010);
}
