__int64 __fastcall ruff_python_formatter::context::WithIndentLevel<B,D>::new(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 result; // rax
  __int16 v6; // cx

  v4 = *(_QWORD *)(a3 + 8);
  <ruff_python_formatter::context::WithNodeLevel<B> as core::ops::deref::DerefMut>::deref_mut(v4);
  result = <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::state_mut(v4);
  v6 = *(_WORD *)(result + 40);
  *(_WORD *)(result + 40) = a2;
  *(_OWORD *)a1 = *(_OWORD *)a3;
  *(_WORD *)(a1 + 16) = v6;
  return result;
}