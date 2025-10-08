__int64 __fastcall uu_more::Pager::draw(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v7; // rax
  bool v8; // cf
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax

  result = uu_more::Pager::draw_lines();
  if ( !result )
  {
    v7 = a1[10];
    v8 = __CFADD__(a1[11], v7);
    v9 = a1[11] + v7;
    v10 = a1[14];
    v11 = -1LL;
    if ( !v8 )
      v11 = v9;
    v12 = core::cmp::Ord::min(v10, v11);
    uu_more::Pager::draw_prompt(a1, a2, v12, a3);
    v13 = <std::io::stdio::Stdout as std::io::Write>::flush(a2);
    if ( v13 )
      return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
    else
      return 0LL;
  }
  return result;
}