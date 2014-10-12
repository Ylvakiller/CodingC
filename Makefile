.PHONY: clean All

All:
	@echo "----------Building project:[ Assingment1 - Debug ]----------"
	@cd "Assingment1" && $(MAKE) -f  "Assingment1.mk"
clean:
	@echo "----------Cleaning project:[ Assingment1 - Debug ]----------"
	@cd "Assingment1" && $(MAKE) -f  "Assingment1.mk" clean
