// attributes: thunk
__int64 alacritty_terminal::tty::unix::default_shell_command()
{
  return std::process::Command::new();
}