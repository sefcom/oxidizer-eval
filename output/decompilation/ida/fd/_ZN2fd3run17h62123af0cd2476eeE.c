__int64 __fastcall fd::run(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 is_not_a_path; // rax
  __int64 *v7; // rsi
  __int64 *v8; // rax
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rax
  char v12; // cl
  char v13; // [rsp+4h] [rbp-894h]
  _QWORD v14[3]; // [rsp+10h] [rbp-888h] BYREF
  __int64 v15; // [rsp+28h] [rbp-870h] BYREF
  __int64 v16; // [rsp+30h] [rbp-868h] BYREF
  __int64 v17; // [rsp+38h] [rbp-860h] BYREF
  __int64 v18; // [rsp+40h] [rbp-858h]
  _QWORD v19[3]; // [rsp+48h] [rbp-850h] BYREF
  _QWORD v20[3]; // [rsp+60h] [rbp-838h] BYREF
  _QWORD dest[64]; // [rsp+78h] [rbp-820h] BYREF
  __int64 v22; // [rsp+278h] [rbp-620h] BYREF
  __int64 v23; // [rsp+280h] [rbp-618h]
  _QWORD v24[61]; // [rsp+288h] [rbp-610h] BYREF
  _QWORD src[64]; // [rsp+470h] [rbp-428h] BYREF
  _QWORD v26[69]; // [rsp+670h] [rbp-228h] BYREF

  clap_builder::derive::Parser::parse(src);
  fd::cli::Opts::gen_completions((__int64)dest, src[63]);
  if ( LOBYTE(dest[0]) == 1 )
  {
    v1 = dest[1];
LABEL_5:
    *(_QWORD *)(a1 + 8) = v1;
LABEL_6:
    *(_BYTE *)a1 = 1;
    return core::ptr::drop_in_place<fd::cli::Opts>(src);
  }
  if ( BYTE1(dest[0]) != 5 )
  {
    fd::print_completions(a1, BYTE1(dest[0]));
    return core::ptr::drop_in_place<fd::cli::Opts>(src);
  }
  v1 = fd::set_working_dir(src);
  if ( v1 )
    goto LABEL_5;
  fd::cli::Opts::search_paths(dest, (__int64)src);
  v4 = dest[1];
  if ( __OFSUB__(-dest[0], 1LL) )
  {
    *(_QWORD *)(a1 + 8) = dest[1];
    goto LABEL_6;
  }
  v5 = dest[2];
  v14[0] = dest[0];
  v14[1] = dest[1];
  v14[2] = dest[2];
  if ( !dest[2] )
  {
    dest[0] = &off_4027C8;
    dest[1] = 1LL;
    dest[2] = 8LL;
    *(_OWORD *)&dest[3] = 0LL;
    is_not_a_path = anyhow::__private::format_err(dest);
    goto LABEL_12;
  }
  is_not_a_path = fd::ensure_search_pattern_is_not_a_path(src, src, v3, -dest[0]);
  if ( is_not_a_path )
  {
LABEL_12:
    *(_QWORD *)(a1 + 8) = is_not_a_path;
    *(_BYTE *)a1 = 1;
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v14);
    return core::ptr::drop_in_place<fd::cli::Opts>(src);
  }
  v15 = 0LL;
  v16 = 8LL;
  v7 = &src[27];
  if ( src[26] == 0x8000000000000000LL )
    v7 = &v16;
  v17 = 0LL;
  v8 = &src[28];
  if ( src[26] == 0x8000000000000000LL )
    v8 = &v17;
  core::iter::traits::iterator::Iterator::chain(dest, *v7, *v7 + 24 * *v8, &src[17]);
  dest[6] = src;
  core::iter::traits::iterator::Iterator::collect(&v22, dest);
  v9 = v22;
  v10 = v23;
  if ( v22 == 0x8000000000000000LL )
  {
    *(_QWORD *)(a1 + 8) = v23;
    *(_BYTE *)a1 = 1;
    goto LABEL_27;
  }
  v19[0] = v22;
  v19[1] = v23;
  v19[2] = v24[0];
  memcpy(dest, src, sizeof(dest));
  v18 = v24[0];
  fd::construct_config(&v22, dest, v23, v24[0]);
  if ( v22 == 2 )
  {
    *(_QWORD *)(a1 + 8) = v23;
    *(_BYTE *)a1 = 1;
LABEL_26:
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v19);
    goto LABEL_27;
  }
  memcpy(&v26[2], v24, 0x1E8uLL);
  v26[0] = v22;
  v26[1] = v23;
  v11 = fd::ensure_use_hidden_option_for_leading_dot_pattern(BYTE2(v26[59]), v10, v18);
  if ( v11 )
  {
    v12 = 1;
  }
  else
  {
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(dest, v19);
    dest[4] = v26;
    core::iter::traits::iterator::Iterator::collect(&v22, dest);
    v11 = v23;
    if ( v22 != 0x8000000000000000LL )
    {
      v20[0] = v22;
      v20[1] = v23;
      v20[2] = v24[0];
      memcpy(dest, v26, 0x1F8uLL);
      fd::walk::scan(a1, v4, v5, (__int64)v20, dest);
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v15);
      return core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v14);
    }
    v12 = 0;
  }
  v13 = v12;
  *(_QWORD *)(a1 + 8) = v11;
  *(_BYTE *)a1 = 1;
  core::ptr::drop_in_place<fd::config::Config>(v26);
  if ( v13 )
    goto LABEL_26;
LABEL_27:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v15);
  result = core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v14);
  if ( v9 == 0x8000000000000000LL )
    return core::ptr::drop_in_place<fd::cli::Opts>(src);
  return result;
}