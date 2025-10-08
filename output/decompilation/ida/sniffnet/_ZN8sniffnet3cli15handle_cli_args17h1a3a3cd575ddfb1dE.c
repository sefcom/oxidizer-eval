__int64 sniffnet::cli::handle_cli_args()
{
  __int64 latest; // rax
  __int64 v1; // rdx
  __int64 v2; // r15
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int128 v17; // [rsp+0h] [rbp-298h] BYREF
  __int64 v18; // [rsp+10h] [rbp-288h]
  char v19; // [rsp+18h] [rbp-280h]
  __int128 v20; // [rsp+20h] [rbp-278h] BYREF
  __int64 v21; // [rsp+30h] [rbp-268h]
  __int128 dest; // [rsp+80h] [rbp-218h] BYREF
  __int64 v23; // [rsp+90h] [rbp-208h]
  __int128 v24; // [rsp+98h] [rbp-200h]
  unsigned __int64 v25; // [rsp+188h] [rbp-110h]

  clap_builder::derive::Parser::parse(&v17);
  if ( v19 )
  {
    <sniffnet::gui::types::conf::Conf as core::default::Default>::default(&dest);
    sniffnet::gui::types::conf::Conf::store(&v20, &dest);
    if ( (_DWORD)v20 == 10 )
    {
      core::ptr::drop_in_place<core::result::Result<(),confy::ConfyError>>(&v20);
      *(_QWORD *)&dest = &off_2DFEE20;
      *((_QWORD *)&dest + 1) = 1LL;
      v23 = 8LL;
      v24 = 0LL;
      std::io::stdio::_print(&dest);
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<(),confy::ConfyError>>(&v20);
    }
    std::process::exit(0);
  }
  latest = iced_runtime::window::get_latest();
  v2 = iced_runtime::task::Task<T>::then(latest, v1);
  v25 = 0x8000000000000038LL;
  v3 = iced_runtime::task::Task<T>::stream(&dest);
  result = iced_runtime::task::Task<T>::chain(v2, &off_2DF52F0, v3);
  if ( (_QWORD)v17 != 0x8000000000000000LL )
  {
    v6 = result;
    v7 = v5;
    v21 = v18;
    v20 = v17;
    LOBYTE(dest) = 0;
    v25 = 0x8000000000000002LL;
    v8 = iced_runtime::task::Task<T>::stream(&dest);
    v9 = iced_runtime::task::Task<T>::chain(v6, v7, v8);
    v11 = v10;
    v23 = v21;
    dest = v20;
    v25 = 0x8000000000000003LL;
    v12 = iced_runtime::task::Task<T>::stream(&dest);
    v13 = iced_runtime::task::Task<T>::chain(v9, v11, v12);
    v15 = v14;
    v25 = 0x800000000000000CLL;
    v16 = iced_runtime::task::Task<T>::stream(&dest);
    return iced_runtime::task::Task<T>::chain(v13, v15, v16);
  }
  return result;
}