__int64 __fastcall alacritty_config::replace_simple(__int64 a1)
{
  __int128 v2; // [rsp+0h] [rbp-D8h]
  __int64 v3; // [rsp+10h] [rbp-C8h]
  __int64 v4; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v5; // [rsp+28h] [rbp-B0h]
  __int64 v6; // [rsp+38h] [rbp-A0h]
  __int128 v7; // [rsp+40h] [rbp-98h]
  __int128 v8; // [rsp+50h] [rbp-88h]
  __int128 v9; // [rsp+60h] [rbp-78h]
  __int64 v10; // [rsp+70h] [rbp-68h]
  __int64 v11; // [rsp+78h] [rbp-60h] BYREF
  __int128 v12; // [rsp+80h] [rbp-58h]
  __int64 v13; // [rsp+90h] [rbp-48h]
  __int128 v14; // [rsp+98h] [rbp-40h]
  __int128 v15; // [rsp+A8h] [rbp-30h]
  __int128 v16; // [rsp+B8h] [rbp-20h]
  __int64 v17; // [rsp+C8h] [rbp-10h]

  serde::de::impls::<impl serde::de::Deserialize for alloc::vec::Vec<T>>::deserialize(&v4);
  v2 = v5;
  v3 = v6;
  if ( v4 == 2 )
  {
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::rc::Rc<alacritty::config::ui_config::Hint>>>(a1);
    *(_QWORD *)(a1 + 16) = v3;
    *(_OWORD *)a1 = v2;
    return 0LL;
  }
  else
  {
    v17 = v10;
    v16 = v9;
    v15 = v8;
    v14 = v7;
    v12 = v5;
    v13 = v6;
    v11 = v4;
    return alloc::boxed::Box<T>::new(&v11);
  }
}