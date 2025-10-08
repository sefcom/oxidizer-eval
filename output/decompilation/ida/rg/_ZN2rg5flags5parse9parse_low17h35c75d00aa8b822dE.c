void *__fastcall rg::flags::parse::parse_low(_QWORD *dest, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r14
  __int128 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  void *result; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  char v24; // [rsp+7h] [rbp-571h] BYREF
  __int128 v25; // [rsp+8h] [rbp-570h] BYREF
  __int128 v26; // [rsp+18h] [rbp-560h]
  __int64 v27; // [rsp+28h] [rbp-550h]
  __int128 v28; // [rsp+30h] [rbp-548h] BYREF
  __int64 v29; // [rsp+40h] [rbp-538h]
  __int64 v30; // [rsp+48h] [rbp-530h] BYREF
  __int128 v31; // [rsp+50h] [rbp-528h] BYREF
  __int64 v32; // [rsp+60h] [rbp-518h]
  _OWORD v33[2]; // [rsp+70h] [rbp-508h] BYREF
  __int64 v34; // [rsp+90h] [rbp-4E8h]
  _OWORD v35[38]; // [rsp+A0h] [rbp-4D8h] BYREF
  _QWORD src[79]; // [rsp+300h] [rbp-278h] BYREF

  if ( (unsigned __int8)rg::logger::Logger::init() )
  {
    src[0] = &v24;
    src[1] = <log::SetLoggerError as core::fmt::Display>::fmt;
    *(_QWORD *)&v35[0] = &off_3EB4A8;
    *((_QWORD *)&v35[0] + 1) = 1LL;
    *(_QWORD *)&v35[2] = 0LL;
    *(_QWORD *)&v35[1] = src;
    *((_QWORD *)&v35[1] + 1) = 1LL;
    result = (void *)anyhow::__private::format_err(v35, a2, v2, v3, v4, v5);
    dest[1] = result;
    *dest = 4LL;
  }
  else
  {
    v6 = rg::flags::parse::Parser::new();
    <rg::flags::lowargs::LowArgs as core::default::Default>::default(src);
    std::env::args_os(&v25);
    v35[1] = v26;
    v35[0] = v25;
    *(_QWORD *)&v35[2] = 1LL;
    v7 = v35;
    v8 = rg::flags::parse::Parser::parse(v6, v35, src);
    *(_QWORD *)&v28 = v8;
    if ( v8 )
    {
      dest[1] = v8;
      *dest = 4LL;
      return (void *)core::ptr::drop_in_place<rg::flags::lowargs::LowArgs>(src, v7, v9);
    }
    core::ptr::drop_in_place<core::result::Result<(),anyhow::Error>>(&v28);
    rg::flags::parse::set_log_levels(src);
    v10 = BYTE3(src[75]);
    BYTE3(src[75]) = 5;
    if ( v10 != 5 )
    {
      *((_BYTE *)dest + 8) = v10;
      *dest = 2LL;
      return (void *)core::ptr::drop_in_place<rg::flags::lowargs::LowArgs>(src, v7, v9);
    }
    if ( BYTE2(src[71]) )
    {
      if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
      {
        *(_QWORD *)&v35[0] = &off_3EB4B8;
        *((_QWORD *)&v35[0] + 1) = 1LL;
        v35[1] = 8uLL;
        v15 = log::__private_api::loc(&off_3EB4F0, 0LL, v11, v12, v13, v14);
        *(_QWORD *)&v25 = aRgFlagsParse;
        *((_QWORD *)&v25 + 1) = 16LL;
        *(_QWORD *)&v26 = aRgFlagsParse;
        *((_QWORD *)&v26 + 1) = 16LL;
        v27 = v15;
        log::__private_api::log(v35, 4LL, &v25);
      }
      return memcpy(dest, src, 0x260uLL);
    }
    else
    {
      rg::flags::config::args(&v28);
      if ( v29 )
      {
        v32 = v29;
        v31 = v28;
        std::env::args_os(v35);
        v33[1] = v35[1];
        v33[0] = v35[0];
        v34 = 1LL;
        alloc::vec::Vec<T,A>::extend_desugared(&v31, v33);
        <rg::flags::lowargs::LowArgs as core::default::Default>::default(v35);
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v25, &v31);
        v7 = &v25;
        v17 = rg::flags::parse::Parser::parse(v6, &v25, v35);
        v30 = v17;
        if ( v17 )
        {
          dest[1] = v17;
          *dest = 4LL;
          core::ptr::drop_in_place<rg::flags::lowargs::LowArgs>(v35, &v25, v18);
        }
        else
        {
          core::ptr::drop_in_place<core::result::Result<(),anyhow::Error>>(&v30);
          rg::flags::parse::set_log_levels(v35);
          v7 = v35;
          memcpy(dest, v35, 0x260uLL);
        }
        return (void *)core::ptr::drop_in_place<rg::flags::lowargs::LowArgs>(src, v7, v9);
      }
      if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
      {
        *(_QWORD *)&v35[0] = &off_3EB4C8;
        *((_QWORD *)&v35[0] + 1) = 1LL;
        v35[1] = 8uLL;
        v23 = log::__private_api::loc(&off_3EB4D8, 0LL, v19, v20, v21, v22);
        *(_QWORD *)&v25 = aRgFlagsParse;
        *((_QWORD *)&v25 + 1) = 16LL;
        *(_QWORD *)&v26 = aRgFlagsParse;
        *((_QWORD *)&v26 + 1) = 16LL;
        v27 = v23;
        log::__private_api::log(v35, 4LL, &v25);
      }
      memcpy(dest, src, 0x260uLL);
      return (void *)core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v28);
    }
  }
  return result;
}