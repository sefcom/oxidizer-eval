__int64 __fastcall uu_sort::print_sorted(__int64 *a1, __int64 a2, __int64 *a3)
{
  unsigned __int8 **v3; // r13
  unsigned __int8 **v4; // r12
  unsigned __int8 **v5; // r14
  unsigned __int64 v6; // r15
  __int64 v7; // rbp
  unsigned __int8 **v8; // rbx
  char v9; // al
  __int64 v11; // [rsp+8h] [rbp-70h]
  _QWORD v12[12]; // [rsp+18h] [rbp-60h] BYREF

  uu_sort::Output::into_write((__int64)v12, a3);
  v11 = *a1;
  v3 = (unsigned __int8 **)a1[1];
  v4 = (unsigned __int8 **)a1[2];
  v5 = (unsigned __int8 **)a1[3];
  v6 = a1[4];
  v7 = a1[5];
  while ( !v11 )
  {
    if ( v4 == v5 )
      return core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v12);
    v3 = v4;
    v4 += 3;
    v11 = 1LL;
    do
    {
LABEL_9:
      if ( v4 == v5 )
      {
        v4 = v5;
        v8 = 0LL;
        goto LABEL_3;
      }
      v9 = uu_sort::compare_by(v3, v4, v6, (_QWORD *)(*(_QWORD *)v7 + 48LL), (_QWORD *)(*(_QWORD *)v7 + 48LL));
      v4 += 3;
    }
    while ( !v9 );
    v8 = v4 - 3;
    v11 = 1LL;
LABEL_3:
    uu_sort::Line::print((__int64)v3, v12, a2);
    v3 = v8;
  }
  if ( v3 )
    goto LABEL_9;
  return core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v12);
}
