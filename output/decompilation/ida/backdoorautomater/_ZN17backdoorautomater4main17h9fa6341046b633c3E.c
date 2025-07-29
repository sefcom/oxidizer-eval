__int64 backdoorautomater::main()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rdx
  char v4; // r13
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // r15
  __int64 v7; // rax
  char v8; // r12
  char v9; // bl
  char v10; // r15
  __int64 v11; // rax
  char v12; // r14
  __int64 service; // rax
  __int64 result; // rax
  __int128 v15; // [rsp+0h] [rbp-3B8h] BYREF
  __int64 v16; // [rsp+10h] [rbp-3A8h]
  __int128 v17; // [rsp+20h] [rbp-398h] BYREF
  __int64 v18; // [rsp+30h] [rbp-388h]
  __int128 v19; // [rsp+38h] [rbp-380h] BYREF
  _BYTE v20[24]; // [rsp+48h] [rbp-370h] BYREF
  _BYTE v21[24]; // [rsp+60h] [rbp-358h] BYREF
  _BYTE v22[24]; // [rsp+78h] [rbp-340h] BYREF
  _BYTE v23[24]; // [rsp+90h] [rbp-328h] BYREF
  _BYTE v24[24]; // [rsp+A8h] [rbp-310h] BYREF
  __int64 v25; // [rsp+C0h] [rbp-2F8h]
  int v26; // [rsp+C8h] [rbp-2F0h]
  __int128 v27; // [rsp+D0h] [rbp-2E8h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-2D8h]
  __int128 v29; // [rsp+F0h] [rbp-2C8h] BYREF
  __int64 v30; // [rsp+100h] [rbp-2B8h]
  __int128 v31; // [rsp+110h] [rbp-2A8h] BYREF
  __int64 v32; // [rsp+120h] [rbp-298h]
  __int128 v33[9]; // [rsp+128h] [rbp-290h] BYREF
  __int128 v34[9]; // [rsp+1C0h] [rbp-1F8h] BYREF
  __int128 v35[9]; // [rsp+258h] [rbp-160h] BYREF
  __int128 v36[12]; // [rsp+2F0h] [rbp-C8h] BYREF

  do
  {
    *(_QWORD *)&v19 = &off_22ADB0;
    *((_QWORD *)&v19 + 1) = 1LL;
    *(_QWORD *)v20 = 8LL;
    *(_OWORD *)&v20[8] = 0LL;
    std::io::stdio::_print(&v19);
    *(_QWORD *)&v19 = &off_22ADC0;
    *((_QWORD *)&v19 + 1) = 1LL;
    *(_QWORD *)v20 = 8LL;
    *(_OWORD *)&v20[8] = 0LL;
    std::io::stdio::_print(&v19);
    *(_QWORD *)&v19 = &off_22ADD0;
    *((_QWORD *)&v19 + 1) = 1LL;
    *(_QWORD *)v20 = 8LL;
    *(_OWORD *)&v20[8] = 0LL;
    std::io::stdio::_print(&v19);
    *(_QWORD *)&v19 = &off_22ADE0;
    *((_QWORD *)&v19 + 1) = 1LL;
    *(_QWORD *)v20 = 8LL;
    *(_OWORD *)&v20[8] = 0LL;
    std::io::stdio::_print(&v19);
    *(_QWORD *)&v19 = &off_22ADF0;
    *((_QWORD *)&v19 + 1) = 1LL;
    *(_QWORD *)v20 = 8LL;
    *(_OWORD *)&v20[8] = 0LL;
    std::io::stdio::_print(&v19);
    *(_QWORD *)&v15 = 0LL;
    *((_QWORD *)&v15 + 1) = 1LL;
    v16 = 0LL;
    *(_QWORD *)&v19 = std::io::stdio::stdin(&v19);
    v0 = std::io::stdio::Stdin::read_line(&v19, &v15);
    core::result::Result<T,E>::expect(v0, v1, &off_22AE00);
    v2 = core::str::<impl str>::trim_matches(*((_QWORD *)&v15 + 1), v16);
    v4 = core::num::<impl core::str::traits::FromStr for u8>::from_str(v2, v3);
    v6 = v5;
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v19, aConcertStringT, 32LL);
    v18 = *(_QWORD *)v20;
    v17 = v19;
    <alloc::string::String as core::ops::arith::Add<&str>>::add(&v19, &v17, *((_QWORD *)&v15 + 1), v16);
    core::result::Result<T,E>::expect(v4 & 1, v6, *((_QWORD *)&v19 + 1), *(_QWORD *)v20, &off_22AE18);
    core::ptr::drop_in_place<alloc::string::String>(&v19);
    alloc::vec::Vec<T,A>::clear(&v15);
    core::ptr::drop_in_place<alloc::string::String>(&v15);
  }
  while ( !v6 );
  *(_QWORD *)&v19 = 0LL;
  *((_QWORD *)&v19 + 1) = 1LL;
  *(_OWORD *)v20 = 0LL;
  *(_QWORD *)&v20[16] = 1LL;
  *(_OWORD *)v21 = 0LL;
  *(_QWORD *)&v21[16] = 1LL;
  LOBYTE(v26) = 0;
  *(_OWORD *)v22 = 0LL;
  *(_QWORD *)&v22[16] = 1LL;
  *(_OWORD *)v23 = 0LL;
  *(_QWORD *)&v23[16] = 1LL;
  *(_OWORD *)v24 = 0LL;
  *(_QWORD *)&v24[16] = 1LL;
  v25 = 0LL;
  switch ( v6 )
  {
    case 1u:
      backdoorautomater::Param::set_param((__int64)&v19, 1);
      <backdoorautomater::Param as core::clone::Clone>::clone(v33, &v19);
      backdoorautomater::sanitizer::sanitize_param_hub(v33, 1);
      v28 = *(_QWORD *)v21;
      v27 = *(_OWORD *)&v20[8];
      v16 = *(_QWORD *)v22;
      v15 = *(_OWORD *)&v21[8];
      v18 = *(_QWORD *)v20;
      v17 = v19;
      v7 = backdoorautomater::newservice::write_service(&v27, &v15, &v17, v26);
      v8 = 1;
      backdoorautomater::sanitizer::sanitize_return_fn(v7);
      v9 = 1;
      goto LABEL_12;
    case 2u:
      backdoorautomater::Param::set_param((__int64)&v19, 2);
      <backdoorautomater::Param as core::clone::Clone>::clone(v34, &v19);
      backdoorautomater::sanitizer::sanitize_param_hub(v34, 2);
      v30 = *(_QWORD *)v21;
      v29 = *(_OWORD *)&v20[8];
      v28 = *(_QWORD *)v24;
      v27 = *(_OWORD *)&v23[8];
      v16 = *(_QWORD *)v20;
      v15 = v19;
      v18 = *(_QWORD *)v22;
      v17 = *(_OWORD *)&v21[8];
      service = backdoorautomater::modifyservice::get_service(&v29, &v27, v26, &v15, &v17);
      v8 = 0;
      backdoorautomater::sanitizer::sanitize_return_fn(service);
      v9 = 1;
      goto LABEL_12;
    case 3u:
      backdoorautomater::Param::set_param((__int64)&v19, 3);
      <backdoorautomater::Param as core::clone::Clone>::clone(v35, &v19);
      backdoorautomater::sanitizer::sanitize_param_hub(v35, 3);
      v30 = *(_QWORD *)v20;
      v29 = v19;
      v28 = *(_QWORD *)v22;
      v27 = *(_OWORD *)&v21[8];
      v16 = *(_QWORD *)v24;
      v15 = *(_OWORD *)&v23[8];
      v18 = v25;
      v17 = *(_OWORD *)&v24[8];
      backdoorautomater::shellscript::create_script(&v29, &v27, &v15, &v17, v26);
      v10 = 0;
      goto LABEL_6;
    case 4u:
      backdoorautomater::Param::set_param((__int64)&v19, 4);
      <backdoorautomater::Param as core::clone::Clone>::clone(v36, &v19);
      backdoorautomater::sanitizer::sanitize_param_hub(v36, 4);
      v32 = *(_QWORD *)v20;
      v31 = v19;
      v30 = *(_QWORD *)v22;
      v29 = *(_OWORD *)&v21[8];
      v28 = *(_QWORD *)v24;
      v27 = *(_OWORD *)&v23[8];
      v16 = v25;
      v15 = *(_OWORD *)&v24[8];
      v18 = *(_QWORD *)v23;
      v17 = *(_OWORD *)&v22[8];
      v11 = backdoorautomater::cronshell::create_cron(&v31, &v29, &v27, (__int64)&v15, v26, (__int64)&v17);
      backdoorautomater::sanitizer::sanitize_return_fn(v11);
      v10 = 1;
LABEL_6:
      v12 = 1;
      v8 = 0;
      break;
    default:
      core::ptr::drop_in_place<alloc::string::String>(&v19);
      v10 = 0;
      v12 = 0;
      v8 = 1;
      break;
  }
  result = core::ptr::drop_in_place<alloc::string::String>(&v20[8]);
  if ( !v12 )
    result = core::ptr::drop_in_place<alloc::string::String>(&v21[8]);
  v9 = v8;
  if ( !v10 )
LABEL_12:
    result = core::ptr::drop_in_place<alloc::string::String>(&v22[8]);
  if ( v8 )
    result = core::ptr::drop_in_place<alloc::string::String>(&v23[8]);
  if ( v9 )
    return core::ptr::drop_in_place<alloc::string::String>(&v24[8]);
  return result;
}