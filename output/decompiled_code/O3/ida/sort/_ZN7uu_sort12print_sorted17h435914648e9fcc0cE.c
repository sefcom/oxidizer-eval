__int64 __fastcall uu_sort::print_sorted(unsigned __int64 *a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int8 **v4; // rcx
  unsigned __int8 **v5; // r15
  unsigned __int8 **v6; // rax
  unsigned __int8 **v7; // r12
  __int64 v8; // rdi
  unsigned __int8 **v9; // r13
  unsigned __int8 **v10; // r14
  unsigned __int64 v11; // rbx
  unsigned __int64 v13; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v14; // [rsp+10h] [rbp-98h]
  unsigned __int64 v15; // [rsp+18h] [rbp-90h]
  unsigned __int64 v16; // [rsp+20h] [rbp-88h]
  unsigned __int64 v17; // [rsp+28h] [rbp-80h]
  unsigned __int64 v18; // [rsp+30h] [rbp-78h]
  unsigned __int8 **v19; // [rsp+38h] [rbp-70h]
  _QWORD v20[12]; // [rsp+48h] [rbp-60h] BYREF

  uu_sort::Output::into_write((__int64)v20, a3);
  v18 = *a1;
  v4 = (unsigned __int8 **)a1[1];
  v14 = a1[2];
  v5 = (unsigned __int8 **)a1[3];
  v16 = a1[4];
  v15 = a1[5];
  v6 = (unsigned __int8 **)a1[6];
  v13 = a1[7];
  v7 = (unsigned __int8 **)a1[8];
  v19 = (unsigned __int8 **)a1[9];
  v17 = a1[10];
  while ( 1 )
  {
    v9 = v5;
    if ( v4 )
    {
      v3 = v14;
      v9 = v4;
      if ( !v6 )
        goto LABEL_8;
      goto LABEL_19;
    }
    if ( !v5 || v5 == (unsigned __int8 **)v16 )
      break;
    v5 += 3;
    v3 = v15;
    if ( !v6 )
      goto LABEL_8;
LABEL_19:
    v10 = v7;
    v11 = v13;
    v7 = v6;
    if ( !v9 )
    {
LABEL_2:
      v8 = (__int64)v7;
      goto LABEL_3;
    }
LABEL_20:
    if ( (unsigned __int8)uu_sort::compare_by(
                            v9,
                            v7,
                            v18,
                            (_QWORD *)(*(_QWORD *)v3 + 48LL),
                            (_QWORD *)(*(_QWORD *)v11 + 48LL)) == 1 )
    {
      v8 = (__int64)v7;
      v14 = v3;
      goto LABEL_4;
    }
    v8 = (__int64)v9;
    v9 = 0LL;
    v13 = v11;
LABEL_5:
    uu_sort::Line::print(v8, v20, a2);
    v6 = v7;
    v4 = v9;
    v7 = v10;
  }
  v9 = 0LL;
  if ( v6 )
    goto LABEL_19;
LABEL_8:
  if ( v7 && v7 != v19 )
  {
    v10 = v7 + 3;
    v11 = v17;
    if ( !v9 )
      goto LABEL_2;
    goto LABEL_20;
  }
  if ( v9 )
  {
    v8 = (__int64)v9;
    v10 = v7;
LABEL_3:
    v9 = 0LL;
LABEL_4:
    v7 = 0LL;
    goto LABEL_5;
  }
  return core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v20);
}
