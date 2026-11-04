package com.vector.cfg.automation.model.ecuc.microsar.cantrcv_tja1043.cantrcv;

 /*  Suppress warnings because it is generated code  */ 
 /*  CHECKSTYLE:OFF  */ 
 /*  Common Packages  */ 
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;
import java.math.*;
import com.google.common.base.Optional;
import com.google.common.base.Preconditions;
import com.google.common.collect.*;
import com.vector.annotations.publishedapi.*;
import com.vector.cfg.model.access.*;
import com.vector.cfg.model.access.TypedDefRef.*;
import com.vector.cfg.model.mdf.commoncore.autosar.*;
import com.vector.cfg.model.mdf.model.autosar.ecucdescription.*;
import com.vector.cfg.model.mdf.model.autosar.ecucparamdef.*;
import com.vector.cfg.model.mdf.model.autosar.commonpatterns.blockelements.MIDocumentationBlock;
import com.vector.cfg.gen.core.bswmdmodel.*;
import com.vector.cfg.gen.core.bswmdmodel.modelintern.*;
import com.vector.cfg.gen.core.bswmdmodel.param.*;
import com.vector.cfg.gen.core.moduleinterface.*;
import com.vector.cfg.gen.core.bswmdmodel.exceptions.BswmdModelException;
import com.vector.cfg.gen.core.bswmdmodel.IGeneratorModelAccess;
 /*  Parent Packages  */ 
 /*  Subelements Packages  */ 
import com.vector.cfg.automation.model.ecuc.microsar.cantrcv_tja1043.cantrcv.cantrcvconfigset.*;
import com.vector.cfg.automation.model.ecuc.microsar.cantrcv_tja1043.cantrcv.cantrcvgeneral.*;
import com.vector.cfg.automation.model.ecuc.microsar.cantrcv_tja1043.cantrcv.*;
 /*  BseInterface includes  */ 
 /*  ModuleDefinition includes  */ 
import com.vector.cfg.util.version.IVersion;


/**
 * Implementation class of module definition '/MICROSAR/CanTrcv_Tja1043/CanTrcv'. 
 * 
 * <p>
 * Definition description:
 * <pre>
 * Configuration of the CanTrcv (CAN Transceiver driver) module.
 * </pre>
 * </p>
 *
 * <p>
 * HANDS OFF - THIS CODE HAS BEEN GENERATED AUTOMATICALLY! NEVER CHANGE IT MANUALLY!<br>
 * (c) Copyright Vector Informatik GmbH. All Rights Reserved.
 * </p>
 * 
 */
@SuppressWarnings({ "all", "warnings", "unchecked", "unused", "cast" })
public final class CanTrcv  extends GAbstractModuleConfiguration{
 

    /**
	 * <b><code>/MICROSAR/CanTrcv_Tja1043/CanTrcv</code></b>.
	 * <p>
	 * DefRef <code>CanTrcv</code>.<br>
	 * Package <code>/MICROSAR/CanTrcv_Tja1043</code>
	 * <ul>
	 *  <li>Configuration Class  - MIModuleConfiguration</li>
	 *  <li>Definition  Class    - MIModuleDef</li>
	 *  <li>Value Class          - Void</li>
	 *  <li>BswmdModel Class     - CanTrcv</li>
	 *  <li>TypeInfo             - TypeInfo.OPTIONAL_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
	 */
    public static final WrappedTypedDefRef<MIModuleDef,MIModuleConfiguration,Void,CanTrcv> DefRef = com.vector.cfg.automation.model.ecuc.microsar.cantrcv_tja1043.cantrcv.CanTrcvDefRefs.CanTrcvDefRef;
	 

       /**
     * Creators for subcontainers
     */
    
    private static final ICreateGIModelObjectFunction<CanTrcvConfigSet> _CanTrcvConfigSet_e6d1d269Creator = (defRef, cfgElement, modelAccess, parent) -> CanTrcvConfigSet.create(modelAccess, (MIContainer) cfgElement);
    
    private static final ICreateGIModelObjectFunction<CanTrcvGeneral> _CanTrcvGeneral_e1ae1f02Creator = (defRef, cfgElement, modelAccess, parent) -> CanTrcvGeneral.create(modelAccess, (MIContainer) cfgElement);
    
   	/**
     * Subcontainer declarations
     */
    
    private CanTrcvConfigSet _CanTrcvConfigSet_e6d1d269; 
    private boolean isCanTrcvConfigSetInitialized = false;

    private CanTrcvGeneral _CanTrcvGeneral_e1ae1f02; 
    private boolean isCanTrcvGeneralInitialized = false;


    /**
     * {@inheritDoc}
     */
    @Override
    protected void invalidateCache() {
        super.invalidateCache();
        
	    
	    /*
		 * Invalidate SubContainer Section
		 */
        isCanTrcvConfigSetInitialized = false; 
        isCanTrcvGeneralInitialized = false; 
        
        
         /*
		 * Invalidate Parameter and Refs Section
		 */
    }   
   
    /**
     * Internal Constructor.
     * <p>
     * You shall use the {@link GIModelFactory} of your generated model to create instances of this type.
     * </p>
     *
     * <p>
     * CAUTION: You are NOT allowed to call this method. This is for internal use ONLY!
     * </p>
     * 
     * @param access
     * @param configuration The configElement of the MdfModel
     */
    private CanTrcv(IInternalGeneratorModelAccess access, MIModuleConfiguration configuration) {
        super(access, DefRef, configuration);
    }

    /**
     * Internal construction method.
     * <p>
     * You shall use the {@link GIModelFactory} of your generated model to create instances of this type.
     * </p>
     *
     * <p>
     * CAUTION: You are NOT allowed to call this method. This is for internal use ONLY!
     * </p>
     * 
     * @param access
     * @param configuration The configElement of the MdfModel
     */
    public static CanTrcv create(IInternalGeneratorModelAccess modelAccess, MIModuleConfiguration configuration) {
        GIModelObject value = modelAccess.getRelatedElement(configuration);
      	if( value != null){
      		return (CanTrcv) value;
      	}
        final CanTrcv moduleCfg = new CanTrcv(modelAccess, configuration);
        modelAccess.setRelatedElement(moduleCfg, configuration);
        return moduleCfg;
    }
    
	/*
	 * Init SubContainer Section
	 */
 	
 	private void initializeCanTrcvConfigSet(){
 	
        checkCacheAndInvalidateIfNecessary();
        // Get container 'CanTrcvConfigSet'
        
        if(isCanTrcvConfigSetInitialized == false){
            
            _CanTrcvConfigSet_e6d1d269 = BswmdModelInternalElementFactory.initializeReqOptContainer(this, CanTrcvConfigSet.DefRef, _CanTrcvConfigSet_e6d1d269Creator);
            
            isCanTrcvConfigSetInitialized = true;
        }
        
	}
    
 	private void initializeCanTrcvGeneral(){
 	
        checkCacheAndInvalidateIfNecessary();
        // Get container 'CanTrcvGeneral'
        
        if(isCanTrcvGeneralInitialized == false){
            
            _CanTrcvGeneral_e1ae1f02 = BswmdModelInternalElementFactory.initializeReqOptContainer(this, CanTrcvGeneral.DefRef, _CanTrcvGeneral_e1ae1f02Creator);
            
            isCanTrcvGeneralInitialized = true;
        }
        
	}
     
  
   
	/**
     * {@inheritDoc}
     */
    @Override
    public DefRef getDefRef() {
        return DefRef;
    }

    
    /**
     * {@inheritDoc}
     */
    @Override
    public GIHasContainer getParent() {
        return null;
    }
 
 
    /**
     * {@inheritDoc}
     */
    @Override
    public IGeneratorModelAccess getGeneratorModelAccess() {
        return (IGeneratorModelAccess) super.getGeneratorModelAccess();
    }
 
    private IGeneratorPackage getGeneratorPackage() {
        return getGeneratorModelAccess().getGeneratorPackage();
    }
    

	/**
     * {@inheritDoc}
     */
    @Override
    public CanTrcv getModuleConfiguration(){
    	return (CanTrcv)super.getModuleConfiguration();
    }


  

	/*
	 * SubContainer Access section
	 */
	
	
	/**
     * Returns true if the CanTrcvConfigSet exists, otherwise false.
     *
     * <p>
	 * Definition: <b><code>/MICROSAR/CanTrcv_Tja1043/CanTrcv/CanTrcvConfigSet</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanTrcvConfigSet}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * This is the multiple configuration set container for CAN transceiver driver.
     * </pre>
     * </p>
     * 
     * @return true, if the container exists.
     */
	public boolean existsCanTrcvConfigSet(){
    	try {
    		initializeCanTrcvConfigSet();
        	return _CanTrcvConfigSet_e6d1d269 != null;
        } catch (BswmdModelException ex) {
        	return false;
        }
    }
	
	
	/**
     * Returns true if the CanTrcvGeneral exists, otherwise false.
     *
     * <p>
	 * Definition: <b><code>/MICROSAR/CanTrcv_Tja1043/CanTrcv/CanTrcvGeneral</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanTrcvGeneral}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * General configuration parameters of the CANTRCV.
     * </pre>
     * </p>
     * 
     * @return true, if the container exists.
     */
	public boolean existsCanTrcvGeneral(){
    	try {
    		initializeCanTrcvGeneral();
        	return _CanTrcvGeneral_e1ae1f02 != null;
        } catch (BswmdModelException ex) {
        	return false;
        }
    }
    
    /**
     * Gets the CanTrcvConfigSet.
     * 
     * <p>
     * This method will never return null. In an error case it will throw an exception.
     * </p>
     *
     * <p>
	 * Definition: <b><code>/MICROSAR/CanTrcv_Tja1043/CanTrcv/CanTrcvConfigSet</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanTrcvConfigSet}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * This is the multiple configuration set container for CAN transceiver driver.
     * </pre>
     * </p>
     * 
     * @return The CanTrcvConfigSet.
     * @exception BswmdModelNotExistsException <ul>
     * <li>If requested container does not exist.</li>
     * </ul>
     */
    public CanTrcvConfigSet getCanTrcvConfigSet(){
    	try{
    		switchView();
    		
	    	initializeCanTrcvConfigSet();
	        
	        getModelVerifier().assertContainerNotNull(this, _CanTrcvConfigSet_e6d1d269, CanTrcvConfigSet.DefRef);
	        getModelVerifier().assertElementIsTheOnlyElement(this, _CanTrcvConfigSet_e6d1d269, _CanTrcvConfigSet_e6d1d269.getMdfObject());
	        
	        return _CanTrcvConfigSet_e6d1d269;
	        
	    }finally{
	    	restoreView();
	    }
    }
    
    
    /**
     * Gets the CanTrcvConfigSet or null if not existing.
     * 
     * <p>
	 * Definition: <b><code>/MICROSAR/CanTrcv_Tja1043/CanTrcv/CanTrcvConfigSet</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanTrcvConfigSet}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * This is the multiple configuration set container for CAN transceiver driver.
     * </pre>
     * </p>
     * 
     * @return The CanTrcvConfigSet or null.
     */
    public CanTrcvConfigSet getCanTrcvConfigSetOrNull(){
    	try{
    		switchView();
    		
	    	initializeCanTrcvConfigSet();
	    	if (_CanTrcvConfigSet_e6d1d269 != null) {
	            getModelVerifier().assertElementIsTheOnlyElement(this, _CanTrcvConfigSet_e6d1d269, _CanTrcvConfigSet_e6d1d269.getMdfObject());
	    	}
	        return _CanTrcvConfigSet_e6d1d269;
	        
	    }finally{
	    	restoreView();
	    }
    }
    
    /**
     * Gets the CanTrcvConfigSet or create a new one if not existing.
     * 
     * <p>
     * This method will never return null.
     * </p>
     *
     * <p>
	 * Definition: <b><code>/MICROSAR/CanTrcv_Tja1043/CanTrcv/CanTrcvConfigSet</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanTrcvConfigSet}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * This is the multiple configuration set container for CAN transceiver driver.
     * </pre>
     * </p>
     * 
     * @return The CanTrcvConfigSet.
     */
    public CanTrcvConfigSet getCanTrcvConfigSetOrCreate(){
    	try{
    		switchView();
    		
	    	final CanTrcvConfigSet loc = getCanTrcvConfigSetOrNull();
	    	if (loc != null) {
	            return loc;
	    	}
	        BswmdModelInternalElementFactory.createCont(this, CanTrcvConfigSet.DefRef, _CanTrcvConfigSet_e6d1d269Creator);
            return getCanTrcvConfigSetOrNull();
	        
	    }finally{
	    	restoreView();
	    }
    }
    
    /**
     * Gets the CanTrcvGeneral.
     * 
     * <p>
     * This method will never return null. In an error case it will throw an exception.
     * </p>
     *
     * <p>
	 * Definition: <b><code>/MICROSAR/CanTrcv_Tja1043/CanTrcv/CanTrcvGeneral</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanTrcvGeneral}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * General configuration parameters of the CANTRCV.
     * </pre>
     * </p>
     * 
     * @return The CanTrcvGeneral.
     * @exception BswmdModelNotExistsException <ul>
     * <li>If requested container does not exist.</li>
     * </ul>
     */
    public CanTrcvGeneral getCanTrcvGeneral(){
    	try{
    		switchView();
    		
	    	initializeCanTrcvGeneral();
	        
	        getModelVerifier().assertContainerNotNull(this, _CanTrcvGeneral_e1ae1f02, CanTrcvGeneral.DefRef);
	        getModelVerifier().assertElementIsTheOnlyElement(this, _CanTrcvGeneral_e1ae1f02, _CanTrcvGeneral_e1ae1f02.getMdfObject());
	        
	        return _CanTrcvGeneral_e1ae1f02;
	        
	    }finally{
	    	restoreView();
	    }
    }
    
    
    /**
     * Gets the CanTrcvGeneral or null if not existing.
     * 
     * <p>
	 * Definition: <b><code>/MICROSAR/CanTrcv_Tja1043/CanTrcv/CanTrcvGeneral</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanTrcvGeneral}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * General configuration parameters of the CANTRCV.
     * </pre>
     * </p>
     * 
     * @return The CanTrcvGeneral or null.
     */
    public CanTrcvGeneral getCanTrcvGeneralOrNull(){
    	try{
    		switchView();
    		
	    	initializeCanTrcvGeneral();
	    	if (_CanTrcvGeneral_e1ae1f02 != null) {
	            getModelVerifier().assertElementIsTheOnlyElement(this, _CanTrcvGeneral_e1ae1f02, _CanTrcvGeneral_e1ae1f02.getMdfObject());
	    	}
	        return _CanTrcvGeneral_e1ae1f02;
	        
	    }finally{
	    	restoreView();
	    }
    }
    
    /**
     * Gets the CanTrcvGeneral or create a new one if not existing.
     * 
     * <p>
     * This method will never return null.
     * </p>
     *
     * <p>
	 * Definition: <b><code>/MICROSAR/CanTrcv_Tja1043/CanTrcv/CanTrcvGeneral</code></b>.
	 * <ul>
	 *  <li>Return Type             - {@literal CanTrcvGeneral}</li>
	 *  <li>Mdf Definition Class    - MIParamConfContainerDef</li>
	 *  <li>Mdf Configuration Class - MIContainer</li>
	 *  <li>TypeInfo                - TypeInfo.MANDATORY_MULTIPLICITY</li>
	 * </ul> 
	 * </p>
     * 
     * <p>
     * Definition description:
     * <pre>
     * General configuration parameters of the CANTRCV.
     * </pre>
     * </p>
     * 
     * @return The CanTrcvGeneral.
     */
    public CanTrcvGeneral getCanTrcvGeneralOrCreate(){
    	try{
    		switchView();
    		
	    	final CanTrcvGeneral loc = getCanTrcvGeneralOrNull();
	    	if (loc != null) {
	            return loc;
	    	}
	        BswmdModelInternalElementFactory.createCont(this, CanTrcvGeneral.DefRef, _CanTrcvGeneral_e1ae1f02Creator);
            return getCanTrcvGeneralOrNull();
	        
	    }finally{
	    	restoreView();
	    }
    }
    
        
    /*
	 * Optional Elements special Access section
	 */

  
    
    
    /**
     * {@inheritDoc}
     */
    @Override
    public String toString() {
        final StringBuilder builder = new StringBuilder();
        builder.append("BswmdModel ModuleDefinition CanTrcv: ");
        builder.append(getObjectLink() + "\n");
        builder.append("BswmdModel DefRef: ");
        builder.append(getDefRef().getDefRefString()  + "\n");
        
        try {
        	switchView();
        
        	builder.append("Actual DefRef: ");
        	builder.append(DefRef.create(getMdfObject()).getDefRefString()  + "\n");
        	
        }finally{
        	restoreView();
        }
        
        builder.append("BswmdModel Class: ");
        builder.append(getClass().getName() + "\n");
        return builder.toString();
    }
}
