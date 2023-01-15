# tree-sitter-poryscript

## Installation

This is an untested draft and these steps may be inaccurate. Please report any issues.

### Neovim
- Ensure tree-sitter is available on your $PATH
- Ensure [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter) is installed an configured
- Clone the repo
  - `git clone https://github.com/V-FEXrt/tree-sitter-poryscript.git`
- Build the parser
  - `cd tree-sitter-poryscript && tree-sitter generate`
- Link the highlights file
  - `mkdir -p ~/.config/nvim/queries/poryscript && ln -s queries/highlights.scm ~/.config/nvim/queries/poryscript/highlights.scm`
- Update your neovim init.lua with the following

```lua
-- Custom filetype associations
vim.filetype.add {
  extension = {
    pory = 'poryscript',
  }
}

-- Configure the poryscript parser
require('nvim-treesitter.parsers').get_parser_configs().poryscript = {
  install_info = {
    url = '<PATH TO tree-sitter-poryscript checkout>',
    files = { 'src/parser.c' },
  },
  filetype = 'pory',
}

```
- Install the parser with the vim command
  - `:TSInstall poryscript`
