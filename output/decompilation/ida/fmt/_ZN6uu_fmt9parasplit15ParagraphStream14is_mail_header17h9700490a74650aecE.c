char __fastcall uu_fmt::parasplit::ParagraphStream::is_mail_header(_QWORD *a1)
{
  char result; // al
  __int64 v2; // rbx
  unsigned __int64 v3; // r14
  char v4; // cl
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  unsigned __int8 v7; // al
  _QWORD v8[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( a1[3] )
    return 0;
  v2 = a1[1];
  v3 = a1[2];
  v4 = core::slice::<impl [T]>::starts_with(v2, v3, aFrom, 5LL);
  result = 1;
  if ( !v4 )
  {
    v6 = core::str::<impl str>::find(v2, v3);
    result = 0;
    if ( v6 )
    {
      if ( v5 )
      {
        if ( v5 >= v3 )
        {
          if ( v5 != v3 )
LABEL_9:
            core::str::slice_error_fail(v2, v3, 0LL, v5, &off_126668);
        }
        else if ( *(char *)(v2 + v5) <= -65 )
        {
          goto LABEL_9;
        }
        v8[0] = v2;
        v8[1] = v2 + v5;
        v7 = core::iter::traits::iterator::Iterator::try_fold(v8);
        return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v7);
      }
    }
  }
  return result;
}
