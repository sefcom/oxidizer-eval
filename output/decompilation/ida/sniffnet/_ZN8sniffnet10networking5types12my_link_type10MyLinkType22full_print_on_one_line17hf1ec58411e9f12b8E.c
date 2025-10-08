void __fastcall sniffnet::networking::types::my_link_type::MyLinkType::full_print_on_one_line(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned int v7; // [rsp+Ch] [rbp-ECh] BYREF
  __int128 v8; // [rsp+10h] [rbp-E8h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+20h] [rbp-D8h]
  __int128 v10; // [rsp+30h] [rbp-C8h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+40h] [rbp-B8h]
  _QWORD *v12; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v13; // [rsp+58h] [rbp-A0h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+68h] [rbp-90h]
  __int128 *v15; // [rsp+70h] [rbp-88h]
  __int64 (__fastcall *v16)(); // [rsp+78h] [rbp-80h]
  _QWORD v17[2]; // [rsp+80h] [rbp-78h] BYREF
  __int128 v18; // [rsp+90h] [rbp-68h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-58h]
  _QWORD v20[10]; // [rsp+A8h] [rbp-50h] BYREF

  if ( a2 >= 9 )
  {
    *a1 = 0LL;
    a1[1] = 1LL;
    a1[2] = 0LL;
  }
  else
  {
    v7 = a3;
    v17[0] = sniffnet::translations::translations_3::link_type_translation(a4);
    v17[1] = v5;
    pcap::linktype::Linktype::get_name(&v12, &v7);
    if ( (_DWORD)v12 == 1 )
    {
      sniffnet::networking::types::my_link_type::MyLinkType::full_print_on_one_line::{{closure}}(&v10, a3, &v13);
    }
    else
    {
      v11 = v14;
      v10 = v13;
    }
    pcap::linktype::Linktype::get_description(&v12, &v7);
    if ( (_DWORD)v12 == 1 )
    {
      *(_QWORD *)&v8 = 0LL;
      *((_QWORD *)&v8 + 1) = 1LL;
      v9 = 0LL;
      core::ptr::drop_in_place<pcap::Error>(&v13);
    }
    else
    {
      v9 = v14;
      v8 = v13;
    }
    v12 = v17;
    *(_QWORD *)&v13 = <&T as core::fmt::Display>::fmt;
    *((_QWORD *)&v13 + 1) = &v10;
    v14 = <alloc::string::String as core::fmt::Display>::fmt;
    v15 = &v8;
    v16 = <alloc::string::String as core::fmt::Display>::fmt;
    v20[0] = &unk_2DFFA78;
    v20[1] = 4LL;
    v20[4] = 0LL;
    v20[2] = &v12;
    v20[3] = 3LL;
    core::option::Option<T>::map_or_else(&v18, 0LL, v6, v20);
    core::ptr::drop_in_place<alloc::string::String>(&v8);
    core::ptr::drop_in_place<alloc::string::String>(&v10);
    a1[2] = v19;
    *(_OWORD *)a1 = v18;
  }
}