__int64 __fastcall uu_expr::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // [rsp+0h] [rbp-768h]
  int v8; // [rsp+8h] [rbp-760h]
  struct _Unwind_Exception *v9; // [rsp+10h] [rbp-758h]
  int v10; // [rsp+18h] [rbp-750h]
  char is_truthy; // [rsp+1Fh] [rbp-749h]
  __int64 v12; // [rsp+70h] [rbp-6F8h]
  _OWORD v13[6]; // [rsp+80h] [rbp-6E8h] BYREF
  __int64 v14; // [rsp+E0h] [rbp-688h]
  __int128 v15; // [rsp+E8h] [rbp-680h] BYREF
  __int128 v16; // [rsp+F8h] [rbp-670h]
  __int128 v17; // [rsp+108h] [rbp-660h]
  __int128 v18; // [rsp+118h] [rbp-650h]
  __int128 v19; // [rsp+128h] [rbp-640h]
  __int128 v20; // [rsp+138h] [rbp-630h]
  __int64 v21; // [rsp+148h] [rbp-620h]
  int v22[26]; // [rsp+150h] [rbp-618h] BYREF
  int dest[178]; // [rsp+1B8h] [rbp-5B0h] BYREF
  __int128 v24; // [rsp+480h] [rbp-2E8h]
  __int128 v25; // [rsp+490h] [rbp-2D8h]
  __int128 v26; // [rsp+4A0h] [rbp-2C8h]
  __int128 v27; // [rsp+4B0h] [rbp-2B8h]
  __int128 v28; // [rsp+4C0h] [rbp-2A8h]
  __int128 v29; // [rsp+4D0h] [rbp-298h]
  __int64 v30; // [rsp+4E0h] [rbp-288h]
  _BYTE v31[24]; // [rsp+4E8h] [rbp-280h] BYREF
  _BYTE v32[24]; // [rsp+500h] [rbp-268h] BYREF
  _BYTE v33[64]; // [rsp+518h] [rbp-250h] BYREF
  __int128 v34; // [rsp+558h] [rbp-210h] BYREF
  __int64 v35; // [rsp+568h] [rbp-200h]
  __int64 v36; // [rsp+570h] [rbp-1F8h] BYREF
  __int128 v37; // [rsp+578h] [rbp-1F0h]
  __int128 v38; // [rsp+588h] [rbp-1E0h]
  _BYTE v39[40]; // [rsp+598h] [rbp-1D0h] BYREF
  _OWORD v40[2]; // [rsp+5C0h] [rbp-1A8h] BYREF
  __int64 v41; // [rsp+5E0h] [rbp-188h] BYREF
  __int128 v42; // [rsp+5E8h] [rbp-180h]
  __int128 v43; // [rsp+5F8h] [rbp-170h]
  _BYTE v44[40]; // [rsp+608h] [rbp-160h] BYREF
  _OWORD v45[4]; // [rsp+630h] [rbp-138h] BYREF
  _OWORD v46[2]; // [rsp+670h] [rbp-F8h] BYREF
  _OWORD v47[2]; // [rsp+690h] [rbp-D8h] BYREF
  _BYTE v48[48]; // [rsp+6B0h] [rbp-B8h] BYREF
  __int128 v49; // [rsp+6E0h] [rbp-88h] BYREF
  __int128 v50; // [rsp+6F0h] [rbp-78h]
  _BYTE v51[32]; // [rsp+700h] [rbp-68h] BYREF
  __int128 v52; // [rsp+720h] [rbp-48h] BYREF
  __int64 v53; // [rsp+730h] [rbp-38h]
  char v54; // [rsp+746h] [rbp-22h]
  char v55; // [rsp+747h] [rbp-21h]
  __int128 *v56; // [rsp+758h] [rbp-10h]
  __int64 (__fastcall *v57)(); // [rsp+760h] [rbp-8h]

  v54 = 0;
  v55 = 1;
  uu_expr::uu_app(dest);
  v55 = 0;
  clap_builder::builder::command::Command::try_get_matches_from((int)v22, (int)dest, a1, a2, v2, v3, v7, v8, v9, v10);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v15, v22);
  if ( (_QWORD)v15 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v15 + 1),
             &off_192DF8);
  v30 = v21;
  v29 = v20;
  v28 = v19;
  v27 = v18;
  v26 = v17;
  v25 = v16;
  v24 = v15;
  v14 = v21;
  v13[5] = v20;
  v13[4] = v19;
  v13[3] = v18;
  v13[2] = v17;
  v13[1] = v16;
  v13[0] = v15;
  clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v33, v13, aExpression, 10LL, &off_192D98);
  core::option::Option<T>::map(v32, v33);
  core::option::Option<T>::unwrap_or_default(v31, v32);
  v4 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v31);
  uu_expr::syntax_tree::AstNode::parse(v44, v4, v5);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v41, v44);
  if ( v41 )
  {
    v45[1] = v43;
    v45[0] = v42;
    v12 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v45,
            &off_192DE0);
LABEL_13:
    v54 = 0;
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v31);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v13);
    return v12;
  }
  v45[3] = v43;
  v45[2] = v42;
  v40[1] = v43;
  v40[0] = v42;
  uu_expr::syntax_tree::AstNode::eval(v39, v40);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v36, v39);
  if ( v36 )
  {
    v46[1] = v38;
    v46[0] = v37;
    v12 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            v46,
            &off_192DE0);
    core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(v40);
    goto LABEL_13;
  }
  v47[1] = v38;
  v47[0] = v37;
  uu_expr::syntax_tree::NumOrStr::eval_as_string(&v34, v47);
  v54 = 1;
  core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(v40);
  v56 = &v34;
  v57 = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v50 = &v34;
  *((_QWORD *)&v50 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  v49 = v50;
  core::fmt::Arguments::new_v1(v48, &unk_192D58, &v49);
  std::io::stdio::_print(v48);
  v54 = 0;
  v53 = v35;
  v52 = v34;
  <T as core::convert::Into<U>>::into(v51, &v52, &off_192DB0);
  is_truthy = uu_expr::syntax_tree::is_truthy(v51);
  if ( (is_truthy & 1) == 0 )
  {
    core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(v51);
    v12 = <T as core::convert::Into<U>>::into(1LL, &off_192DC8);
    goto LABEL_13;
  }
  core::ptr::drop_in_place<uu_expr::syntax_tree::NumOrStr>(v51);
  v12 = 0LL;
  v54 = 0;
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v31);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v13);
  return v12;
}
