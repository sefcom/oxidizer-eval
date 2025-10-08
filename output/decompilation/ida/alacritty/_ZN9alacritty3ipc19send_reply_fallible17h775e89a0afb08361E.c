__int64 __fastcall alacritty::ipc::send_reply_fallible(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  __int64 v6; // [rsp+8h] [rbp-20h]
  __int64 v7; // [rsp+10h] [rbp-18h]

  serde_json::ser::to_vec(&v5, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  if ( __OFSUB__(-v5, 1LL) )
  {
    v2 = alloc::boxed::Box<T>::new(v6);
    v3 = std::io::error::Error::_new(40LL, v2, &off_882FB8);
  }
  else
  {
    v3 = std::io::Write::write_all(a1, v6, v7, -v5);
    core::ptr::drop_in_place<alloc::string::String>(&v5);
  }
  core::ptr::drop_in_place<<toml::value::MapDeserializer as serde::de::MapAccess>::next_value_seed<core::marker::PhantomData<u8>>::{{closure}}>(a2);
  return v3;
}