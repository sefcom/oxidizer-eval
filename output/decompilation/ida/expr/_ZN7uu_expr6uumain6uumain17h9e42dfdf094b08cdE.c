__int64 __fastcall uu_expr::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  char is_truthy; // bl
  __int128 *v11; // [rsp+8h] [rbp-3C0h] BYREF
  __int128 v12; // [rsp+10h] [rbp-3B8h]
  __int128 v13; // [rsp+20h] [rbp-3A8h]
  _BYTE v14[8]; // [rsp+30h] [rbp-398h] BYREF
  __int64 v15; // [rsp+38h] [rbp-390h]
  __int64 v16; // [rsp+40h] [rbp-388h]
  __int128 v17; // [rsp+48h] [rbp-380h] BYREF
  __int64 v18; // [rsp+58h] [rbp-370h]
  __int128 **v19; // [rsp+60h] [rbp-368h] BYREF
  __int128 v20; // [rsp+68h] [rbp-360h]
  __int128 v21; // [rsp+78h] [rbp-350h]
  _QWORD v22[3]; // [rsp+88h] [rbp-340h] BYREF
  __int128 v23; // [rsp+A0h] [rbp-328h] BYREF
  __int128 v24; // [rsp+B0h] [rbp-318h]
  _OWORD v25[2]; // [rsp+C0h] [rbp-308h] BYREF
  __int128 *dest; // [rsp+E0h] [rbp-2E8h] BYREF
  __int128 v27; // [rsp+E8h] [rbp-2E0h]
  __int128 v28; // [rsp+F8h] [rbp-2D0h]

  core::iter::traits::iterator::Iterator::skip(&dest, a1, a2);
  core::iter::traits::iterator::Iterator::collect(v14, &dest);
  v2 = v15;
  v3 = v16;
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      v4 = *(_QWORD *)(v15 + 8);
      v5 = *(_QWORD *)(v15 + 16);
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, aHelp_0, 6LL) )
      {
        uu_expr::uu_app(&dest);
        v6 = clap_builder::builder::command::Command::print_help(&dest);
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v6);
        core::ptr::drop_in_place<clap_builder::builder::command::Command>(&dest);
LABEL_15:
        v8 = 0LL;
        goto LABEL_17;
      }
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, aVersion, 9LL) )
      {
        v11 = (__int128 *)uucore::util_name();
        *(_QWORD *)&v12 = v7;
        v19 = &v11;
        *(_QWORD *)&v20 = <&T as core::fmt::Display>::fmt;
        dest = (__int128 *)&unk_149B78;
        *(_QWORD *)&v27 = 2LL;
        *((_QWORD *)&v27 + 1) = &v19;
        v28 = 1uLL;
        std::io::stdio::_print(&dest);
        goto LABEL_15;
      }
    }
    else
    {
      v4 = *(_QWORD *)(v15 + 8);
      v5 = *(_QWORD *)(v15 + 16);
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, asc_1C12D, 2LL) )
    {
      --v3;
      v2 += 24LL;
    }
  }
  v22[0] = v2;
  v22[1] = v3;
  v22[2] = 0LL;
  uu_expr::syntax_tree::Parser<S>::parse((__int64)&dest, v22);
  v23 = v27;
  v24 = v28;
  if ( dest == (__int128 *)0x8000000000000005LL )
  {
    v8 = alloc::boxed::Box<T>::new(&v23);
  }
  else
  {
    v13 = v24;
    v12 = v23;
    v11 = dest;
    uu_expr::syntax_tree::AstNode::eval(&v19, &v11);
    v25[0] = v20;
    v25[1] = v21;
    if ( (_DWORD)v19 != 1 )
    {
      uu_expr::syntax_tree::NumOrStr::eval_as_string(&v17, v25);
      core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v11);
      v11 = &v17;
      *(_QWORD *)&v12 = <alloc::string::String as core::fmt::Display>::fmt;
      dest = (__int128 *)&unk_149B20;
      *(_QWORD *)&v27 = 2LL;
      *((_QWORD *)&v27 + 1) = &v11;
      v28 = 1uLL;
      std::io::stdio::_print(&dest);
      *(_QWORD *)&v28 = v18;
      v27 = v17;
      dest = (__int128 *)0x8000000000000000LL;
      is_truthy = uu_expr::syntax_tree::is_truthy(&dest);
      core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(&dest);
      if ( !is_truthy )
      {
        v8 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
        goto LABEL_17;
      }
      goto LABEL_15;
    }
    v8 = alloc::boxed::Box<T>::new(v25);
    core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&v11);
  }
LABEL_17:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v14);
  return v8;
}