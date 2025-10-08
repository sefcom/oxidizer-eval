__int64 __fastcall ruff_python_formatter::context::WithInterpolatedStringState<B,D>::new(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4)
{
  __int64 result; // rax
  __int16 v7; // cx

  <ruff_python_formatter::context::WithNodeLevel<B> as core::ops::deref::DerefMut>::deref_mut(a4);
  result = <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::state_mut(a4);
  v7 = *(_WORD *)(result + 42);
  *(_BYTE *)(result + 42) = a2;
  *(_BYTE *)(result + 43) = a3;
  *(_QWORD *)a1 = a4;
  *(_WORD *)(a1 + 8) = v7;
  return result;
}