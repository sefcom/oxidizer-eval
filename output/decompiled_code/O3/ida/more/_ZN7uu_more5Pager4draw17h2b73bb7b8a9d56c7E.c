__int64 __fastcall uu_more::Pager::draw(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  bool v7; // cf
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax

  uu_more::Pager::draw_lines();
  v6 = *(unsigned __int16 *)(a1 + 64);
  v7 = __CFADD__(*(_QWORD *)(a1 + 24), v6);
  v8 = *(_QWORD *)(a1 + 24) + v6;
  v9 = *(_QWORD *)(a1 + 48);
  v10 = -1LL;
  if ( !v7 )
    v10 = v8;
  v11 = core::cmp::min_by(v9, v10);
  uu_more::Pager::draw_prompt(a1, a2, v11, a3);
  v12 = <std::io::stdio::Stdout as std::io::Write>::flush(a2);
  return core::result::Result<T,E>::unwrap(v12, &off_162A20);
}
