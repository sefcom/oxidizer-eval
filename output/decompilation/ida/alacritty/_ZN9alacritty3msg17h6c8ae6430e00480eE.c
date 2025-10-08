__int64 __fastcall alacritty::msg(__int64 a1)
{
  unsigned __int64 v1; // r14
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int128 v6; // [rsp+0h] [rbp-68h] BYREF
  __int128 v7; // [rsp+10h] [rbp-58h]
  _OWORD v8[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]

  v1 = 0x8000000000000000LL;
  if ( *(_QWORD *)a1 == 0x8000000000000000LL || *(_QWORD *)a1 == 0x8000000000000001LL )
    goto LABEL_8;
  std::env::var(v8, aXdgActivationT, 20LL);
  if ( LODWORD(v8[0]) != 1 )
  {
    v7 = v8[1];
    v6 = v8[0];
    if ( (v8[0] & 1) != 0 )
      goto LABEL_4;
LABEL_6:
    v1 = *((_QWORD *)&v6 + 1);
    v9 = v7;
    goto LABEL_7;
  }
  alacritty::msg::{{closure}}(&v6, (char *)v8 + 8);
  if ( (v6 & 1) == 0 )
    goto LABEL_6;
LABEL_4:
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v6);
LABEL_7:
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a1 + 152);
  *(_QWORD *)(a1 + 152) = v1;
  *(_OWORD *)(a1 + 160) = v9;
LABEL_8:
  v2 = alacritty::ipc::send_message(a1 + 176, (_QWORD *)a1);
  if ( v2 )
    return alloc::boxed::Box<T>::new(v2, a1, v3, v4);
  else
    return 0LL;
}