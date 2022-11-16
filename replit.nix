{ pkgs }: {
	deps = [
		pkgs.pws
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}