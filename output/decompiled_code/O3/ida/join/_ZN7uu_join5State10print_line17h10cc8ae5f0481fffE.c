__int64 __fastcall uu_join::State::print_line(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v7; // r15
  __int64 field; // rax
  __int64 v10; // rdx
  _BYTE v11[33]; // [rsp+1h] [rbp-21h] BYREF

  v11[0] = HIBYTE(v4);
  if ( *(_QWORD *)(a4 + 16) )
  {
    result = uu_join::Repr<Sep>::print_format((_QWORD *)a4, a2, a3, a1);
    if ( result )
      return result;
    goto LABEL_3;
  }
  v7 = *(_QWORD *)(a1 + 64);
  field = uu_join::Line::get_field(a3, v7);
  if ( !field )
  {
    field = *(_QWORD *)(a4 + 24);
    v10 = *(_QWORD *)(a4 + 32);
  }
  result = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, field, v10);
  if ( !result )
  {
    result = uu_join::Repr<Sep>::print_fields(a4, a2, a3, v7);
    if ( !result )
    {
LABEL_3:
      v11[0] = *(_BYTE *)(a4 + 40);
      return <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, v11, 1LL);
    }
  }
  return result;
}
